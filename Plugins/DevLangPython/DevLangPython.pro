#-------------------------------------------------
#
# Project created by QtCreator 2019-01-23T14:35:05
#
#-------------------------------------------------

QT       -= gui

TARGET = DevLangPython
TEMPLATE = lib

contains(QT_ARCH, x86_64) {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x64
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x64
} else {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x86
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x86
}

include ( ../../3part/PythonQt/build/common.prf )
include ( ../../3part/PythonQt/build/PythonQt.prf )

INCLUDEPATH += $$PWD/../../Libs/TACommon

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
