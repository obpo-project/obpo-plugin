# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/1
from obpoplugin import LEVEL
from obpoplugin.idahelper import *
from obpoplugin.manager import mba_manager_instance


class optlevel_t(optblock_t):
    def __init__(self, target_maturity, *args):
        super(optlevel_t, self).__init__(*args)
        self.last_maturity = MMAT_ZERO
        self.target_maturity = target_maturity
        self.handled = False

    def handle(self, mba):
        pass

    def func(self, blk):
        mba = blk.mba
        if self.last_maturity != mba.maturity:
            if mba.maturity < self.last_maturity:
                self.handled = False
            self.last_maturity = mba.maturity
        if mba.maturity >= self.target_maturity and blk.serial == mba.qty - 1 and not self.handled:
            number = self.handle(mba)
            self.handled = number != 0
            return number
        return 0


class MBAOptimizer(optlevel_t):
    def __init__(self, *args):
        optlevel_t.__init__(self, LEVEL, *args)

    def handle(self, mba: mba_t):
        if mba.reqmat < MMAT_LVARS: return 0
        if not mba_manager_instance().is_cache(mba.entry_ea, mba.maturity): return 0

        mba_cache = mba_manager_instance().get_cache(mba.entry_ea, mba.maturity)
        mba_cpy(mba, mba_cache)
        mba.clr_mba_flags(MBA_PRCDEFS)
        return 1
