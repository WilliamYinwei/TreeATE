#-------------------------------------------------
#
# Project created by QtCreator 2020-04-03T14:36:33
#
#-------------------------------------------------

QT       -= gui

TARGET = DevLangCpp
TEMPLATE = lib

DEFINES += DEVLANGCPP_LIBRARY

contains(QT_ARCH, x86_64) {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x64
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x64
} else {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x86
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x86
}

INCLUDEPATH += $$PWD/../../Libs/TACommon

SOURCES += devlangcpp.cpp

HEADERS += devlangcpp.h\
        devlangcpp_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
