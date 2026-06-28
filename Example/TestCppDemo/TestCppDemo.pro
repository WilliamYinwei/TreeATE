#-------------------------------------------------
#
# Project created by QtCreator 2020-05-03T17:30:11
#
#-------------------------------------------------

QT       -= gui

TARGET = TestCppDemo
TEMPLATE = lib

DEFINES += TESTCPPDEMO_LIBRARY

contains(QT_ARCH, x86_64) {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x64
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x64
} else {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x86
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x86
}

INCLUDEPATH += ../../Libs/TACppBase
LIBS += -L$$DESTDIR/libs/ -lTACppBase

SOURCES += testcppdemo.cpp

HEADERS += testcppdemo.h\
        testcppdemo_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
