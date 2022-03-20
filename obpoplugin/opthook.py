# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/10
import logging

from ida_hexrays import Hexrays_Hooks, mba_t_deserialize
from obpoplugin.idahelper import mba_cpy
from obpoplugin.optimizer import optimized_mba
from obpoplugin.optimizer import put_optimized_mba
from obpoplugin.process import request_process

logger = logging.getLogger("OBPO")


class MBAHook(Hexrays_Hooks):

    def set_plugin(self, plugin):
        self.plugin = plugin

    def glbopt(self, mba) -> "int":

        if mba.entry_ea not in self.plugin.mark_manager: return 0

        if mba.entry_ea not in optimized_mba:
            optimized = request_process(mba, self.plugin.mark_manager[mba.entry_ea])
            if not optimized:
                logger.info("{} is ready.".format(hex(mba.entry_ea)))
                put_optimized_mba(mba.entry_ea, None)
                return 0
            put_optimized_mba(mba.entry_ea, optimized.serialize())

        if not optimized_mba[mba.entry_ea]: return 0

        mba_cache = mba_t_deserialize(optimized_mba[mba.entry_ea])

        mba_cpy(mba, mba_cache)
        mba.verify(True)
        return 0
