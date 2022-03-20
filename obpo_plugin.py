# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/8

from idaapi import *
from obpoplugin import logger
from obpoplugin.idahelper import clear_empty_blocks, show_graph
from obpoplugin.optimizer import MBAOptimizer, clr_optimized_mba, rm_optimized_mba, put_optimized_mba
from obpoplugin.process import request_process

mark_action = 'OBPO:MARK_DISPATCH'
unmark_action = 'OBPO:UNMARK_DISPATCH'
remove_all_action = 'OBPO:REMOVE_ALL_DISPATCH'

process_action = 'OBPO:PROCESS_FUNCTION'
revert_action = 'OBPO:REVERT_FUNCTION'
revert_all_action = 'OBPO:REVERT_ALL_FUNCTION'

LEVEL = MMAT_GLBOPT1


def get_block_start(ea):
    func = get_func(ea)
    if not func:
        return ea
    for block in FlowChart(func):
        if block.start_ea <= ea < block.end_ea:
            return block.start_ea
    return ea


def generate_microcode(function: func_t, level=None):
    if level is None: level = MMAT_GLBOPT1
    hf = hexrays_failure_t()
    mbr = mba_ranges_t()
    mbr.ranges.push_back(range_t(function.start_ea, function.end_ea))
    ml = mlist_t()
    mba = gen_microcode(mbr, hf, ml, DECOMP_WARNINGS, level)
    if not mba:
        raise Exception("{} generate mc error:  {}".format(hex(function.start_ea) % hf.errea, hf.str))
    mba.set_mba_flags(MBA_LOADED)
    for i in range(mba.qty):
        mba.get_mblock(i).build_lists(True)
    clear_empty_blocks(mba)
    mba.verify(True)
    return mba


class ProcessHandler(action_handler_t):

    def __init__(self):
        super().__init__()

    def activate(self, ctx):
        ea = get_screen_ea()
        func = get_func(ea)
        if func.start_ea not in plugin.mark_manager:
            logger.info("This function has no mark dispatcher.")
            return 1
        else:
            mba = generate_microcode(func, level=LEVEL)
            optimized = request_process(mba, plugin.mark_manager[func.start_ea])
            if optimized:
                logger.info("{} has been ready.".format(hex(mba.entry_ea)))
                put_optimized_mba(mba.entry_ea, optimized.serialize())
        return 1

    def update(self, ctx):
        return AST_ENABLE_ALWAYS


class RevertHandler(action_handler_t):

    def __init__(self, ):
        super().__init__()

    def activate(self, ctx):
        ea = get_screen_ea()
        func = get_func(ea)
        rm_optimized_mba(func.start_ea)
        return 1

    def update(self, ctx):
        return AST_ENABLE_ALWAYS


class RevertAllHandler(action_handler_t):

    def __init__(self):
        super().__init__()

    def activate(self, ctx):
        clr_optimized_mba()
        plugin.mark_manager.clear()
        return 1

    def update(self, ctx):
        return AST_ENABLE_ALWAYS


class MarkHandler(action_handler_t):

    def __init__(self):
        super().__init__()

    def activate(self, ctx):
        ea = get_screen_ea()
        func = get_func(ea)
        ea = get_block_start(ea)
        if func.start_ea not in plugin.mark_manager:
            plugin.mark_manager[func.start_ea] = set()
        if ea not in plugin.mark_manager[func.start_ea]:
            plugin.mark_manager[func.start_ea].add(ea)
            rm_optimized_mba(func.start_ea)
        logger.info("marked dispatcher: {}".format(hex(ea)))
        return 1

    def update(self, ctx):
        return AST_ENABLE_ALWAYS


class UnMarkHandler(action_handler_t):

    def __init__(self):
        super().__init__()

    def activate(self, ctx):
        ea = get_screen_ea()
        ea = get_block_start(ea)
        for func in plugin.mark_manager:
            if ea in plugin.mark_manager[func]:
                plugin.mark_manager[func].remove(ea)
                rm_optimized_mba(func)
                logger.info("unmarked dispatcher: {} for {}".format(hex(ea), hex(func)))
        return 1

    def update(self, ctx):
        return AST_ENABLE_ALWAYS


class RemoveAllHandler(action_handler_t):

    def __init__(self):
        super().__init__()

    def activate(self, ctx):
        plugin.mark_manager = {}
        clr_optimized_mba()
        logger.info("removed all dispatcher")
        return 1

    def update(self, ctx):
        return AST_ENABLE_ALWAYS


class UiCallback(UI_Hooks):
    def __init__(self):
        UI_Hooks.__init__(self)
        self.register()

    def register(self):
        register_action(action_desc_t(mark_action, 'Mark dispatcher', MarkHandler()))
        register_action(action_desc_t(unmark_action, 'UnMark dispatcher', UnMarkHandler()))
        register_action(action_desc_t(remove_all_action, 'Remove all dispatcher', RemoveAllHandler()))
        register_action(action_desc_t(process_action, 'Process function', ProcessHandler()))
        register_action(action_desc_t(revert_action, 'Revert function', RevertHandler()))
        register_action(action_desc_t(revert_all_action, 'Revert all function', RevertAllHandler()))

    def populating_widget_popup(self, widget, popup, ctx):
        if get_widget_type(widget) == BWN_DISASM and get_view_renderer_type(widget) == TCCRT_GRAPH:
            attach_action_to_popup(widget, popup, mark_action, "OBPO/")
            attach_action_to_popup(widget, popup, unmark_action, "OBPO/")
            attach_action_to_popup(widget, popup, remove_all_action, "OBPO/")
            attach_action_to_popup(widget, popup, process_action, "OBPO/")
            attach_action_to_popup(widget, popup, revert_action, "OBPO/")
            attach_action_to_popup(widget, popup, revert_all_action, "OBPO/")


class OBPO(plugin_t):
    flags = PLUGIN_UNL
    comment = "Obfuscated Binary Pseudo-code Optimizer"
    help = "Help me"
    wanted_name = "OBPO"
    wanted_hotkey = ""

    def __init__(self):
        self.mark_manager: {int, set} = {}
        self.ui = UiCallback()
        self.optimizer = MBAOptimizer()

    def init(self):
        if init_hexrays_plugin():
            self.ui.hook()
            self.optimizer.install()
            logger.info('OBPO is ready')
        else:
            logger.info('OBPO: Hex-rays is not available.')
        return PLUGIN_KEEP

    def term(self):
        msg("Ida plugin term called.\n")

    def run(self, arg):
        warning("Ida plugin run(%d) called.\n" % arg)


plugin = OBPO()
plugin.optimizer.set_plugin(plugin)


def PLUGIN_ENTRY():
    return plugin
