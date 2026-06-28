#-------------------------------------------------
#
# Project created by QtCreator 2018-12-17T17:41:43
#
#-------------------------------------------------

QT       += sql

QT       -= gui

TARGET = LocalSqlite
TEMPLATE = lib

contains(QT_ARCH, x86_64) {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x64/libs
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x64/libs
} else {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x86/libs
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x86/libs
}

DEFINES += LOCALSQLITE_LIBRARY TESTEXPERT_LIBRARY

SOURCES += localsqlite.cpp

HEADERS += localsqlite.h\
        localsqlite_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
