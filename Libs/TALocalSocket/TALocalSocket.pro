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

CONFIG(release, debug|release): DESTDIR = ../../bin/libs
CONFIG(debug, debug|release): DESTDIR = ../../bind/libs

SOURCES += talocalsocket.cpp

HEADERS += talocalsocket.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
