#-------------------------------------------------
#
# Project created by QtCreator 2018-12-17T17:41:43
#
#-------------------------------------------------

QT       += sql

QT       -= gui

TARGET = LocalSqlite
TEMPLATE = lib

CONFIG(release, debug|release): DESTDIR = ../../bin/libs
CONFIG(debug, debug|release): DESTDIR = ../../bind/libs

DEFINES += LOCALSQLITE_LIBRARY TESTEXPERT_LIBRARY

SOURCES += localsqlite.cpp

HEADERS += localsqlite.h\
        localsqlite_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
