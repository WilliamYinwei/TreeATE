#-------------------------------------------------
#
# Project created by QtCreator 2018-12-13T18:10:13
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = TALocalSocket

TEMPLATE = lib
CONFIG += staticlib

contains(QT_ARCH, x86_64) {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x64/libs
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x64/libs
} else {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x86/libs
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x86/libs
}

SOURCES += talocalsocket.cpp

HEADERS += talocalsocket.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
