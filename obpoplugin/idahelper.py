# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/11
import logging

from idaapi import *

logger = logging.getLogger("OBPO")


def get_block_start(ea):
    func = get_func(ea)
    if not func:
        return ea
    for block in FlowChart(func):
        if block.start_ea <= ea < block.end_ea:
            return block.start_ea
    return ea


def visit_instructions(bb: mblock_t):
    if not bb or not bb.head:
        return []
    inst = bb.head
    while inst:
        yield inst
        inst = inst.next


def visit_blocks(mba: mba_t):
    for i in range(mba.qty):
        mblock = mba.get_mblock(i)
        yield mblock


def get_mblock(mba: mba_t, block: int):
    for mblock in visit_blocks(mba):
        if mblock.start <= block < mblock.end:
            return mblock
    return None


def is_condition_jump(inst: minsn_t):
    if inst is None:
        return False
    return inst.opcode in [m_jcnd, m_jnz, m_jz, m_jae, m_jb, m_ja, m_jbe, m_jg, m_jge, m_jl, m_jle, m_jtbl]


def is_jump(inst: minsn_t):
    if inst is None:
        return False
    return inst.opcode in [m_goto, m_jcnd, m_jnz, m_jz, m_jae, m_jb, m_ja, m_jbe, m_jg, m_jge, m_jl, m_jle, m_jtbl]


class Chain:

    def __init__(self):
        self.prev = None
        self.next = None
        self.obj = None


def list2chain(l):
    head = None
    prev = None
    for obj in l:
        cur = Chain()
        cur.prev = prev
        cur.obj = obj
        if prev:
            prev.next = cur
        else:
            head = cur
        prev = cur
    return head


def make_goto(ea, target):
    goto = minsn_t(ea)
    goto.opcode = m_goto
    goto.l = mop_t()
    goto.l.t = mop_b
    goto.l.b = target
    return goto


# python port from https://github.com/wnxd/Han/blob/master/Han/RestoreMacroCompression.cpp

def create_block(mba, insert_loc, start, end):
    mba.get_mblock(insert_loc - 1).type = BLT_NONE
    newblock = mba.insert_block(insert_loc)
    newblock.start = start
    newblock.end = end
    newblock.type = BLT_NONE
    newblock.flags = MBL_FAKE | MBL_COMB
    newblock.mark_lists_dirty()
    return newblock


def blk_cpy(dst: mblock_t, src: mblock_t):
    dst.flags = src.flags
    dst.start = src.start
    dst.end = src.end
    dst.type = src.type
    dst.dead_at_start = src.dead_at_start
    dst.mustbuse = src.mustbuse
    dst.maybuse = src.maybuse
    dst.mustbdef = src.mustbdef
    dst.maybdef = src.maybdef
    dst.dnu = src.dnu
    dst.maxbsp = src.maxbsp
    dst.minbstkref = src.minbstkref
    dst.minbargref = src.minbargref
    dst.predset = src.predset
    dst.succset = src.succset
    src_insn = src.head
    dst_insn = None
    while src_insn:
        new_insn = minsn_t(src_insn)
        new_insn.ea = src_insn.ea
        dst_insn = dst.insert_into_block(new_insn, dst_insn)
        src_insn = src_insn.next


def mba_cpy(dst: mba_t, src: mba_t):
    dst.mark_chains_dirty()
    for i in range(dst.qty):
        dst_block = dst.get_mblock(i)
        dst_block.predset.clear()
        dst_block.succset.clear()
        dst_block.mark_lists_dirty()
        dst_block.type = BLT_NONE
        for ins in visit_instructions(dst_block): dst_block.make_nop(ins)

    for i in range(dst.qty - 2, 0, -1):
        dst_block = dst.get_mblock(i)
        dst.remove_block(dst_block)

    for i in range(1, src.qty - 1):
        dst_block = dst.insert_block(i)
        dst_block.mark_lists_dirty()

    count = 0
    for i in range(src.qty):
        src_block = src.get_mblock(i)
        dst_block = dst.get_mblock(i)
        blk_cpy(dst_block, src_block)
        count += 1

    fixup_stkvar(dst)


def callinfo_cpy(src, dest):
    dest.callee = src.callee
    dest.cc = src.cc
    dest.return_type = src.return_type
    dest.flags = src.flags
    dest.return_regs = src.return_regs
    dest.args = src.args
    dest.call_spd = src.call_spd
    dest.dead_regs = src.dead_regs
    dest.fti_attrs = src.fti_attrs
    dest.pass_regs = src.pass_regs
    dest.retregs = src.retregs
    dest.return_argloc = src.return_argloc
    dest.role = src.role
    dest.solid_args = src.solid_args
    dest.spoiled = src.spoiled
    dest.stkargs_top = src.stkargs_top
    dest.visible_memory = src.visible_memory
    return dest


def callinfo_clear_types(src, dest):
    dest.callee = src.callee
    dest.cc = src.cc
    dest.return_type = tinfo_t(BT_VOID if src.return_type.is_void() else BT_INT)
    dest.return_argloc = src.return_argloc
    n_return_regs = mlist_t()
    n_return_regs.add(src.return_regs)
    dest.return_regs = n_return_regs
    n_retregs = mopvec_t()
    for r in src.retregs: n_retregs.push_back(r)
    dest.retregs = n_retregs
    n_spoiled = mlist_t()
    n_spoiled.add(src.spoiled)
    dest.spoiled = n_spoiled
    dest.flags = src.flags | FCI_PROP | FCI_FINAL
    return dest


def fixup_stkvar(mba):
    # fixup verify.cpp: if ( mv.mba != NULL && s->mba != mv.mba ) INTERR(50762);
    class v(mop_visitor_t):
        def __init__(self):
            super(v, self).__init__()

        def visit_mop(self, op, *args):
            if op.t == mop_S:
                op._make_stkvar(mba, op.s.off)  # replace the mba
            return 0

    mba.for_all_ops(v())


def get_segments():
    segments = []
    for i in range(get_segm_qty()):
        seg: segment_t = getnseg(i)
        addressing = 0
        if hasattr(seg, "use32") and seg.use32(): addressing = 1
        if seg.use64(): addressing = 2
        segments.append({
            "start": seg.start_ea,
            "end": seg.end_ea,
            "name": get_segm_name(seg),
            "sclass": seg.sclass,
            "para": get_segm_para(seg),
            "base": get_segm_base(seg),
            "perm": seg.perm,
            "align": seg.align,
            "type": seg.type,
            "addressing": addressing
        })
    return segments


def is_simple_goto_block(block):
    return block.head and block.head.opcode == m_goto


def clear_empty_blocks(mba: mba_t):
    if mba.maturity > MMAT_CALLS:
        mba.combine_blocks()
    elif hasattr(mba, "remove_empty_and_unreachable_blocks"):
        mba.remove_empty_and_unreachable_blocks()
    elif hasattr(mba, "remove_empty_blocks"):
        mba.remove_empty_blocks()


_graph_idx = 0


def show_graph(mba, hi=None, title=None):
    global _graph_idx
    vp = printer_t()
    mba.build_graph()
    mba._print(vp)
    g = microcode_graphviewer_t(mba, title if title else "{}".format(_graph_idx), vp.get_mc(), hi)
    _graph_idx += 1
    g.Show()


class printer_t(vd_printer_t):
    """Converts microcode output to an array of strings."""

    def __init__(self):
        vd_printer_t.__init__(self)
        self.mc = []

    def get_mc(self):
        return self.mc

    def _print(self, indent, line):
        self.mc.append(line)
        return 1


class microcode_graphviewer_t(GraphViewer):
    """Displays the graph view of Hex-Rays microcode."""

    def __init__(self, mba, title, lines, highlight=None):
        title = "Microcode graph: %s" % title
        GraphViewer.__init__(self, title, True)
        self._mba = mba
        self.highlight = highlight
        self._mba.set_mba_flags(MBA_SHORT)
        self._process_lines(lines)
        self._blockcmts = {}
        if mba.maturity == MMAT_GENERATED or mba.maturity == MMAT_PREOPTIMIZED:
            mba.build_graph()

    def _process_lines(self, lines):
        self._blockcmts = {}
        curblk = "-1"
        self._blockcmts[curblk] = []
        for i, line in enumerate(lines):
            plain_line = tag_remove(line).lstrip()
            if plain_line.startswith(';'):
                # msg("%s" % plain_line)
                re_ret = re.findall("BLOCK ([0-9]+) ", plain_line)
                if len(re_ret) > 0:
                    curblk = re_ret[0]
                    self._blockcmts[curblk] = [line]
                else:
                    self._blockcmts[curblk].append(line)
        if "0" in self._blockcmts:
            self._blockcmts["0"] = self._blockcmts["-1"] + self._blockcmts["0"]
        del self._blockcmts["-1"]

    def OnRefresh(self):
        self.Clear()
        qty = self._mba.qty
        for src in range(qty):
            self.AddNode(src)
        for src in range(qty):
            mblock = self._mba.get_mblock(src)
            for dest in mblock.succset:
                self.AddEdge(src, dest)
        return True

    def OnGetText(self, node):
        mblock = self._mba.get_mblock(node)
        color = None
        if self.highlight and mblock.serial in self.highlight:
            color = 0x00FF00
        vp = qstring_printer_t(None, True)
        mblock._print(vp)

        node_key = "%d" % node
        if node_key in self._blockcmts:
            return ''.join(self._blockcmts[node_key]) + vp.s, color
        else:
            return vp.s, color


class MBAPatcher:

    def __init__(self, mba):
        self.mba: mba_t = mba
        self.blocks = [self.mba.get_mblock(i) for i in range(self.mba.qty)]
        self._insert_location = self._find_insert_location()
        assert self._insert_location

    def _find_insert_location(self):
        for block in visit_blocks(self.mba):
            if block.tail and block.tail.opcode == m_goto:
                return block

    def _insert_block(self, blk):
        blk.type = BLT_NONE
        new_blk = self.mba.insert_block(blk.serial + 1)
        new_blk.flags = blk.flags | MBL_FAKE
        new_blk.type = BLT_NONE
        new_blk.start = blk.start
        new_blk.end = blk.end
        new_blk.mark_lists_dirty()
        return new_blk


def inst_map_id(mba: mba_t):
    id_dict = {}
    for b in visit_blocks(mba):
        idx = 0
        for inst in visit_instructions(b):
            inst_id = "{}+{}".format(b.serial, idx)
            id_dict[inst] = inst_id
            idx += 1
    return id_dict


def id_map_inst(mba: mba_t):
    inst_dict = {}
    for b in visit_blocks(mba):
        idx = 0
        for inst in visit_instructions(b):
            inst_id = "{}+{}".format(b.serial, idx)
            inst_dict[inst_id] = inst
            idx += 1
    return inst_dict


def make_mov(inst, mop, number):
    inst.opcode = m_mov
    inst.d = mop_t(mop)
    inst.l = mop_t()
    inst.l.make_number(number, mop.size)


def make_jz(inst, op, number, target):
    inst.opcode = m_jz
    inst.l = mop_t(op)
    inst.r = mop_t()
    inst.r.make_number(number, op.size)
    inst.d = mop_t()
    inst.d.make_blkref(target.serial)


def insert_tail(block, inst):
    tail = block.tail
    if tail and is_jump(tail):
        tail = tail.prev
    block.insert_into_block(inst, tail)
    block.mark_lists_dirty()


def get_func_start(ea):
    func = get_func(ea)
    return func.start_ea
