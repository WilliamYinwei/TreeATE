qt_add_library(TA_MutilMsgBox
    ta_mutilmsgbox.cpp ta_mutilmsgbox.h
    ta_mutilmsgbox_global.h
)
target_compile_definitions(TA_MutilMsgBox PUBLIC
    TA_MUTILMSGBOX_LIBRARY
)

target_link_libraries(TA_MutilMsgBox PUBLIC
    Qt::Core
    Qt::Network
    TALocalSocket
)

install(TARGETS TA_MutilMsgBox
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
