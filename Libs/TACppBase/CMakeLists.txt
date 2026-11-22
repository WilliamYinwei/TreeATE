qt_add_library(TACppBase
    tacppbase.cpp tacppbase.h
)
target_link_libraries(TACppBase PUBLIC
    Qt::Core
)

install(TARGETS TACppBase
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
