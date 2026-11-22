cmake_minimum_required(VERSION 3.16)
project(Libs VERSION 1.0 LANGUAGES C CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 REQUIRED COMPONENTS Network)

qt_standard_project_setup()


add_subdirectory(TACommon)
add_subdirectory(TALocalSocket)
add_subdirectory(TACppBase)
