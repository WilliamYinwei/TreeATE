qt_add_library(GUI_TA_MsgBox
    gui_ta_msgbox.cpp gui_ta_msgbox.h
    gui_ta_msgbox_global.h
    msgboxdlg.cpp msgboxdlg.h msgboxdlg.ui
)
target_compile_definitions(GUI_TA_MsgBox PUBLIC
    GUI_TA_MSGBOX_LIBRARY
)

target_link_libraries(GUI_TA_MsgBox PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Network
    Qt::Widgets
)

install(TARGETS GUI_TA_MsgBox
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
