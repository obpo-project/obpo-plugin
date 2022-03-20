# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/10

from idaapi import *

idx = 0


def show_graph(mba, hi=None, title=None):
    global idx
    vp = printer_t()
    mba.build_graph()
    mba._print(vp)
    g = microcode_graphviewer_t(mba, title if title else "{}".format(idx), vp.get_mc(), hi)
    idx += 1
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
