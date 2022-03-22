# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/8

from idaapi import *
from obpoplugin import logger
from obpoplugin.optimizer import MBAOptimizer
from obpoplugin.popup import PopupHooks


class OBPO(plugin_t):
    flags = PLUGIN_UNL
    comment = "Obfuscated Binary Pseudo-code Optimizer"
    help = "Help me"
    wanted_name = "OBPO"
    wanted_hotkey = ""

    def __init__(self):
        self.popup_hooks = PopupHooks()
        self.optimizer = MBAOptimizer()

    def init(self):
        if init_hexrays_plugin():
            self.popup_hooks.hook()
            self.optimizer.install()
            logger.info('OBPO is ready')
        else:
            logger.info('Hex-rays is not available, OBPO disabled')
        return PLUGIN_KEEP

    def term(self):
        msg("Ida plugin term called.\n")

    def run(self, arg):
        warning("Ida plugin run(%d) called.\n" % arg)


def PLUGIN_ENTRY():
    return OBPO()
