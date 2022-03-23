# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/22
from ida_hexrays import mba_t
from ida_idaapi import BADADDR
from obpoplugin.idahelper import get_func_start, get_block_start


# Mark Manager
class MarkManager:

    def __init__(self):
        self.marked: {int, set} = {}

    def mark(self, ea):
        s = self.func_marked(ea)
        s.add(get_block_start(ea))

    def unmark(self, ea):
        s = self.func_marked(ea)
        ea = get_block_start(ea)
        if ea in s: s.remove(ea)

    def unmark_func(self, ea):
        s = self.func_marked(ea)
        s.clear()

    def clear(self):
        self.marked.clear()

    def func_marked(self, ea):
        s = get_func_start(ea)
        if s not in self.marked: self.marked[s] = set()
        return self.marked[s]

    def marked_funcs(self):
        return self.marked.keys()

    def is_marked_func(self, ea):
        return get_func_start(ea) in self.marked_funcs()


_mark_instance = MarkManager()


def mark_manager_instance(): return _mark_instance


# Mba Manager
class MbaManager:
    def __init__(self):
        self.caches: {int, {int, mba_t}} = {}

    def cache(self, mba: mba_t):
        ea = mba.entry_ea
        if ea == BADADDR: ea = mba.get_mblock(0).start
        c = self.func_cached(ea)
        c[mba.maturity] = mba

    def uncache(self, ea, level=None):
        c = self.func_cached(ea)
        if level is None:
            c.clear()
        else:
            if level in c: c.pop(level)

    def uncache_all(self, level=None):
        if level is None:
            self.caches.clear()
        else:
            for c in self.caches.values():
                if level in c: c.pop(level)

    def func_cached(self, ea):
        if ea in self.caches: return self.caches[ea]
        ea = get_func_start(ea)
        if ea not in self.caches: self.caches[ea] = {}
        return self.caches[ea]

    def is_cache(self, ea, level):
        return self.get_cache(ea, level) is not None

    def get_cache(self, ea, level):
        c = self.func_cached(ea)
        if level in c: return c[level]
        return None


_mba_instance = MbaManager()


def mba_manager_instance(): return _mba_instance
