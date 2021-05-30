#-------------------------------------------------
#
# Project created by QtCreator 2019-01-23T14:35:05
#
#-------------------------------------------------

QT       -= gui

TARGET = DevLangPython
TEMPLATE = lib

CONFIG(release, debug|release): DESTDIR = ../../bin
CONFIG(debug, debug|release): DESTDIR = ../../bind

include ( ../../3part/PythonQt/build/common.prf )
include ( ../../3part/PythonQt/build/PythonQt.prf )

INCLUDEPATH += $$PWD/../../3part/PythonQt/include
INCLUDEPATH += $$PWD/../../Src/TestEngine

DEFINES += DEVLANGCHOOSE_LIBRARY

SOURCES += devlangchoose.cpp \
    langpy.cpp

HEADERS += devlangchoose.h\
        devlangchoose_global.h \
    langpy.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
