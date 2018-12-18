#-------------------------------------------------
#
# Project created by QtCreator 2018-12-12T11:46:44
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = TA_MsgBox
TEMPLATE = lib

CONFIG(release, debug|release): DESTDIR = ../../bin/libs
CONFIG(debug, debug|release): DESTDIR = ../../bind/libs

DEFINES += TA_MSGBOX_LIBRARY

SOURCES += ta_msgbox.cpp

HEADERS += ta_msgbox.h\
        ta_msgbox_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

LIBS += -L$$DESTDIR -lTALocalSocket
