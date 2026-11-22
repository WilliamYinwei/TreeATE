qt_add_library(TACommon
    imutlilang.h
    ta_inc.h
    tapluginloader.cpp tapluginloader.h
)
target_link_libraries(TACommon PUBLIC
    Qt::Core
)

install(TARGETS TACommon
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
