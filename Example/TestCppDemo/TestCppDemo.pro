#-------------------------------------------------
#
# Project created by QtCreator 2020-05-03T17:30:11
#
#-------------------------------------------------

QT       -= gui

TARGET = TestCppDemo
TEMPLATE = lib

DEFINES += TESTCPPDEMO_LIBRARY

CONFIG(release, debug|release): DESTDIR = ../../bin
CONFIG(debug, debug|release): DESTDIR = ../../bind

INCLUDEPATH += ../../Libs/TACppBase
LIBS += -L$$DESTDIR/libs/ -lTACppBase

SOURCES += testcppdemo.cpp

HEADERS += testcppdemo.h\
        testcppdemo_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
