# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/1

from obpoplugin.idahelper import *


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


optimized_mba = {}


def put_optimized_mba(ea, bs):
    optimized_mba[ea] = bs


def rm_optimized_mba(ea):
    if ea in optimized_mba:
        optimized_mba.pop(ea)


def clr_optimized_mba():
    optimized_mba.clear()


class MBAOptimizer(optlevel_t):
    def __init__(self, *args):
        from obpo_plugin import LEVEL
        optlevel_t.__init__(self, LEVEL, *args)
        self.plugin = None

    def set_plugin(self, plugin):
        self.plugin = plugin

    def handle(self, mba: mba_t):
        if mba.entry_ea not in self.plugin.mark_manager: return 0
        if mba.entry_ea not in optimized_mba: return 0
        if mba.reqmat < MMAT_LVARS: return 0
        # if mba.entry_ea not in optimized_mba:
        #     optimized = request_process(mba, self.plugin.mark_manager[mba.entry_ea])
        #     if len(optimized) <= 10:
        #         logger.error("Sorry, error code is " + optimized)
        #         return 1
        #     logger.info("{} is ready.".format(hex(mba.entry_ea)))
        #     put_optimized_mba(mba.entry_ea, base64.b64decode(optimized))

        mba_cache = mba_t_deserialize(optimized_mba[mba.entry_ea])
        mba_cpy(mba, mba_cache)
        mba.clr_mba_flags(MBA_PRCDEFS)
        return 1
