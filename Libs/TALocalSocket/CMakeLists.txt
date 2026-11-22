cmake_minimum_required(VERSION 3.16)
project(TALocalSocket VERSION 1.0 LANGUAGES C CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 REQUIRED COMPONENTS Network)

qt_standard_project_setup()

qt_add_library(TALocalSocket
    talocalsocket.cpp talocalsocket.h
)
target_link_libraries(TALocalSocket PUBLIC
    Qt::Core
    Qt::Network
)

install(TARGETS TALocalSocket
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
