# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/11
import base64
import json

import requests

from obpoplugin import logger
from obpoplugin.idahelper import *

SERVER = "http://obpo.hluwa.cn:10000"


class MBAFixup(MBAPatcher):

    def run(self):
        self.mba.set_mba_flags(MBA_LOADED)
        fixup_stkvar(self.mba)
        self.mba.build_graph()
        clear_empty_blocks(self.mba)
        self.combine_blocks()
        self.mba.build_graph()
        clear_empty_blocks(self.mba)
        self.mba.verify(True)

    def combine_blocks(self):
        for blk in list(visit_blocks(self.mba)):
            if blk.serial == 0: continue
            if blk.nsucc() != 1: continue
            if blk.succ(0) != blk.serial + 1: continue
            if blk.tail and must_mcode_close_block(blk.tail.opcode, blk.tail.d.empty()): continue
            succ = self.mba.get_mblock(blk.serial + 1)
            if succ.npred() != 1: continue
            if succ.type == BLT_STOP: continue
            blk.succset._del(succ.serial)
            blk.mark_lists_dirty()
            for inst in visit_instructions(succ):
                inst = minsn_t(inst)
                blk.insert_into_block(inst, blk.tail)

            if not is_jump(blk.tail):
                succ2 = self.mba.get_mblock(succ.serial + 1)
                if blk.tail and must_mcode_close_block(blk.tail.opcode, blk.tail.d.empty()):
                    new_blk = self._insert_block(blk)
                    new_blk.insert_into_block(make_goto(blk.end, succ2.serial), new_blk.tail)
                    new_blk.succset.push_back(succ2.serial)
                    succ2.predset.push_back(new_blk.serial)
                else:
                    blk.insert_into_block(make_goto(blk.end, succ2.serial), blk.tail)
                    blk.succset.push_back(succ2.serial)
                    succ2.predset.push_back(blk.serial)
                blk.type = BLT_1WAY
            else:
                for succ2 in succ.succs():
                    blk.succset.push_back(succ2.serial)
                    succ2.predset.push_back(blk.serial)
                blk.type = succ.type


def _backup_calls(mba: mba_t):
    c_map = {}

    class call_visit(minsn_visitor_t):

        def visit_minsn(self):
            op = self.curins.d
            if op.t != mop_f: return 0
            c_map[hash((self.curins.ea, op.f.callee))] = mop_t(op)
            mi = mcallinfo_t()
            mi.callee = op.f.callee
            mi.cc = op.f.cc
            mi.return_type = tinfo_t(BT_VOID if op.f.return_type.is_void() else BT_INT)
            mi.return_argloc = op.f.return_argloc
            mi.return_regs = op.f.return_regs
            mi.retregs = op.f.retregs
            mi.spoiled = op.f.spoiled
            mi.flags = op.f.flags | FCI_PROP | FCI_FINAL
            newop = mop_t()
            newop._make_callinfo(mi)
            newop.size = op.size
            self.curins.d = newop
            self.blk.mark_lists_dirty()
            return 0

    mba.for_all_insns(call_visit())
    return c_map


def _fixup_calls(mba: mba_t, c_map):
    class call_visit(minsn_visitor_t):
        def __init__(self, *args):
            super().__init__(*args)
            self.calls = {}

        def visit_minsn(self):
            op = self.curins.d
            if op.t != mop_f: return 0
            h = hash((self.curins.ea, op.f.callee))
            if h in c_map: self.calls[self.curins] = c_map[h]
            self.blk.mark_lists_dirty()
            return 0

    v = call_visit()
    mba.for_all_insns(v)

    for call in v.calls:
        op = v.calls[call]
        mi = mcallinfo_t()
        mi.callee = op.f.callee
        mi.cc = op.f.cc
        mi.return_type = op.f.return_type
        mi.flags = op.f.flags
        mi.return_regs = op.f.return_regs
        mi.args = op.f.args
        mi.call_spd = op.f.call_spd
        mi.dead_regs = op.f.dead_regs
        mi.fti_attrs = op.f.fti_attrs
        mi.pass_regs = op.f.pass_regs
        mi.retregs = op.f.retregs
        mi.return_argloc = op.f.return_argloc
        mi.role = op.f.role
        mi.solid_args = op.f.solid_args
        mi.spoiled = op.f.spoiled
        mi.stkargs_top = op.f.stkargs_top
        mi.visible_memory = op.f.visible_memory
        newop = mop_t()
        newop._make_callinfo(mi)
        newop.size = op.size
        call.d = newop


def request_process(mba: mba_t, dispatchers):
    info: idainfo = get_inf_structure()
    mba.final_type = False
    c_map = _backup_calls(mba)
    mba_bytes = mba.serialize()
    func_bytes = {}
    T = []
    for r in mba.mbr.ranges:
        r: range_t
        func_bytes[int(r.start_ea)] = base64.b64encode(get_bytes(r.start_ea, r.size())).decode()
        if get_sreg(r.start_ea, str2reg("T")) == 1: T.append(r.start_ea)
    data = json.dumps({
        "maturity": int(mba.maturity),
        "mba": base64.b64encode(mba_bytes).decode(),
        "dispatchers": list(dispatchers),
        "arch": info.procname,
        "bit": 64 if info.is_64bit() else 32,
        "is_be": idainfo_is_be(),
        "segments": get_segments(),
        "version": get_hexrays_version(),
        "func": func_bytes,
        "t": T
    })

    response = requests.post("{}/request".format(SERVER), data=data)
    response = response.text
    if len(response) <= 4:
        logger.error("Sorry, error code is " + response)
        return None
    bs = base64.b64decode(response)
    mba: mba_t = mba_t_deserialize(bs)
    _fixup_calls(mba, c_map)
    MBAFixup(mba).run()
    return mba
