cmake_minimum_required(VERSION 3.16)
project(DevLangCpp VERSION 1.0 LANGUAGES C CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 REQUIRED)

qt_standard_project_setup()

qt_add_library(DevLangCpp
    devlangcpp.cpp devlangcpp.h
    devlangcpp_global.h
)
target_include_directories(DevLangCpp PUBLIC
    ../../Libs/TACommon
)

target_compile_definitions(DevLangCpp PUBLIC
    DEVLANGCPP_LIBRARY
)

target_link_libraries(DevLangCpp PUBLIC
    Qt::Core
)

install(TARGETS DevLangCpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
