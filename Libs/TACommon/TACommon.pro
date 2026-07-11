#-------------------------------------------------
#
# Shared common library for TreeATE
#
#-------------------------------------------------

QT -= gui

TARGET = TACommon
TEMPLATE = lib
CONFIG += staticlib

contains(QT_ARCH, x86_64) {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x64/libs
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x64/libs
} else {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x86/libs
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x86/libs
}

SOURCES += tapluginloader.cpp

HEADERS += imutlilang.h \
    ta_inc.h \
    tapluginloader.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
