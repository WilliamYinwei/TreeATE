#-------------------------------------------------
#
# Project created by QtCreator 2020-04-03T14:36:33
#
#-------------------------------------------------

QT       -= gui

TARGET = DevLangCpp
TEMPLATE = lib

DEFINES += DEVLANGCPP_LIBRARY

CONFIG(release, debug|release): DESTDIR = ../../bin
CONFIG(debug, debug|release): DESTDIR = ../../bind

SOURCES += devlangcpp.cpp

HEADERS += devlangcpp.h\
        devlangcpp_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
