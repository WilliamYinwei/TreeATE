qt_add_library(TA_MsgBox
    ta_msgbox.cpp ta_msgbox.h
    ta_msgbox_global.h
)
target_compile_definitions(TA_MsgBox PUBLIC
    TA_MSGBOX_LIBRARY
)

target_link_libraries(TA_MsgBox PUBLIC
    Qt::Core
    Qt::Network
    TALocalSocket
)

install(TARGETS TA_MsgBox
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
