# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/11
import base64
import json

import requests

from idautils import FuncItems
from obpoplugin import SERVER
from obpoplugin.idahelper import *


def generate_microcode(function: func_t, level=None):
    if level is None: level = MMAT_GLBOPT1
    hf = hexrays_failure_t()
    mbr = mba_ranges_t(function)
    ml = mlist_t()
    mba = gen_microcode(mbr, hf, ml, DECOMP_WARNINGS, level)
    if not mba:
        raise Exception("{} generate mc error:  {}: {}".format(hex(function.start_ea), hex(hf.errea), hf.str))
    for i in range(mba.qty):
        mba.get_mblock(i).build_lists(True)
    clear_empty_blocks(mba)
    mba.set_mba_flags(MBA_LOADED)
    mba.verify(True)
    return mba


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

        def __init__(self, *args):
            super().__init__(*args)
            self.calls = []

        def visit_minsn(self):
            op = self.curins.d
            if not op or op.t != mop_f: return 0
            self.calls.append(self.curins)
            self.blk.mark_lists_dirty()
            return 0

    v = call_visit()
    mba.for_all_insns(v)
    for curins in v.calls:
        op = curins.d
        if not op.f: continue
        c_map[hash((curins.ea, op.f.callee))] = mop_t(op)
        callinfo = mcallinfo_t()
        callinfo_clear_types(op.f, callinfo)
        newop = mop_t()
        # newop._make_callinfo(callinfo) # has maybe crash
        newop.t = mop_f
        newop.f = callinfo
        newop.size = op.size
        curins.d = newop

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
        callinfo = mcallinfo_t()
        callinfo_cpy(op.f, callinfo)
        newop = mop_t()
        # newop._make_callinfo(callinfo) # has maybe crash
        newop.t = mop_f
        newop.f = callinfo
        newop.size = op.size
        call.d = newop


def prepare_request(mba, dispatchers):
    mba.final_type = False  # bypass interr 50913
    mba_bytes = mba.serialize()

    func_bytes = {}
    T = []
    for f in map(get_fchunk, list(FuncItems(mba.entry_ea))):
        if f.start_ea in func_bytes: continue
        func_bytes[int(f.start_ea)] = base64.b64encode(get_bytes(f.start_ea, f.size())).decode()
        if get_sreg(f.start_ea, str2reg("T")) == 1: T.append(f.start_ea)

    info: idainfo = get_inf_structure()
    return json.dumps({
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


def request_process(mba: mba_t, dispatchers):
    c_map = _backup_calls(mba)
    data = prepare_request(mba, dispatchers)
    response = requests.post("{}/request".format(SERVER), data=data)
    response = response.json()
    if "warn" in response: print(response["warn"])
    if response["code"] != 0 or not response["data"]["mba"]:
        hide_wait_box()
        err = "OBPO cannot to process current function"
        if "error" in response: err += "\r\n\r\n" + response["error"]
        info(err)
        print(err)
        return None
    b64_mba = response["data"]["mba"]
    bs = base64.b64decode(b64_mba)
    mba: mba_t = mba_t_deserialize(bs)
    _fixup_calls(mba, c_map)
    MBAFixup(mba).run()
    return mba
