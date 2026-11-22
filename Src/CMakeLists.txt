cmake_minimum_required(VERSION 3.16)
project(Src VERSION 1.0 LANGUAGES C CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 REQUIRED COMPONENTS Gui Network Qml Sql)
find_package(Qt6 OPTIONAL_COMPONENTS Widgets)

qt_standard_project_setup()


add_subdirectory(TestEngine)
add_subdirectory(TreeATE)
add_subdirectory(TreeResults)
