#-------------------------------------------------
#
# Project created by QtCreator 2020-05-03T15:38:01
#
#-------------------------------------------------

QT       -= gui

TARGET = TACppBase
TEMPLATE = lib
CONFIG += staticlib

CONFIG(release, debug|release): DESTDIR = ../../bin/libs
CONFIG(debug, debug|release): DESTDIR = ../../bind/libs

SOURCES += tacppbase.cpp

HEADERS += tacppbase.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
