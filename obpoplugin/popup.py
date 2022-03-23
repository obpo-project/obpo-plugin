# Author: hluwa <hluwa888@gmail.com>
# HomePage: https://github.com/hluwa
# CreateTime: 2022/3/22

from obpoplugin import logger, LEVEL
from obpoplugin.manager import mark_manager_instance, mba_manager_instance
from obpoplugin.process import *


class HandlerProxy(action_handler_t):

    def __init__(self, f):
        super().__init__()
        self.f = f

    def activate(self, ctx):
        self.f(ctx)
        return 1

    def update(self, ctx):
        return AST_ENABLE_ALWAYS


def process(_):
    ea = get_screen_ea()
    if not mark_manager_instance().is_marked_func(ea):
        logger.info("This function has not marked dispatcher.")
    else:
        func = get_func(ea)
        mba = generate_microcode(func, level=LEVEL)
        show_wait_box("OBPO Processing...")
        try:
            optimized = request_process(mba, mark_manager_instance().func_marked(ea))
            if not optimized: return
            mba_manager_instance().cache(optimized)
            logger.info("{} has been processed, please refresh decompiler".format(hex(mba.entry_ea)))
        finally:
            hide_wait_box()


def revert(_):
    ea = get_screen_ea()
    func = get_func(ea)
    mba_manager_instance().uncache(func.start_ea)


def revert_all(_):
    mba_manager_instance().uncache_all()


def mark(_):
    ea = get_screen_ea()
    mark_manager_instance().mark(ea)
    logger.info("marked dispatcher: {}".format(hex(ea)))


def unmark(_):
    ea = get_screen_ea()
    mark_manager_instance().unmark(ea)
    logger.info("unmarked dispatcher: {}".format(hex(ea)))


def unmark_all(_):
    mark_manager_instance().clear()
    logger.info("unmarked all dispatcher")


def mark_and_process(_):
    mark(_)
    process(_)


mark_action = 'OBPO:MARK_DISPATCH'
unmark_action = 'OBPO:UNMARK_DISPATCH'
unmark_all_action = 'OBPO:UNMARK_ALL_DISPATCH'

mark_process_action = 'OBPO:MARK_AND_PROCESS'

process_action = 'OBPO:PROCESS_FUNCTION'
revert_action = 'OBPO:REVERT_FUNCTION'
revert_all_action = 'OBPO:REVERT_ALL_FUNCTION'


class PopupHooks(UI_Hooks):
    def __init__(self):
        UI_Hooks.__init__(self)
        self.register()

    def register(self):
        register_action(action_desc_t(mark_action, 'Mark dispatcher', HandlerProxy(mark)))
        register_action(action_desc_t(unmark_action, 'Unmark dispatcher', HandlerProxy(unmark)))
        register_action(action_desc_t(unmark_all_action, 'Unmark all dispatcher', HandlerProxy(unmark_all)))
        register_action(action_desc_t(mark_process_action, 'Mark and process function', HandlerProxy(mark_and_process)))
        register_action(action_desc_t(process_action, 'Process function', HandlerProxy(process)))
        register_action(action_desc_t(revert_action, 'Revert function', HandlerProxy(revert)))
        register_action(action_desc_t(revert_all_action, 'Revert all function', HandlerProxy(revert_all)))

    def populating_widget_popup(self, widget, popup, ctx):
        if get_widget_type(widget) == BWN_DISASM and get_view_renderer_type(widget) == TCCRT_GRAPH:
            attach_action_to_popup(widget, popup, mark_action, "OBPO/")
            attach_action_to_popup(widget, popup, unmark_action, "OBPO/")
            attach_action_to_popup(widget, popup, unmark_all_action, "OBPO/")
            attach_action_to_popup(widget, popup, mark_process_action, "OBPO/")
            attach_action_to_popup(widget, popup, process_action, "OBPO/")
            attach_action_to_popup(widget, popup, revert_action, "OBPO/")
            attach_action_to_popup(widget, popup, revert_all_action, "OBPO/")
