#-------------------------------------------------
#
# Project created by QtCreator 2020-05-03T15:38:01
#
#-------------------------------------------------

QT       -= gui

TARGET = TACppBase
TEMPLATE = lib
CONFIG += staticlib

contains(QT_ARCH, x86_64) {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x64/libs
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x64/libs
} else {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x86/libs
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x86/libs
}

SOURCES += tacppbase.cpp

HEADERS += tacppbase.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
