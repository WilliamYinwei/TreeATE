#-------------------------------------------------
#
# Project created by QtCreator 2018-12-12T11:42:52
#
#-------------------------------------------------

QT       += core gui
QT       += widgets network

TARGET = GUI_TA_MsgBox
TEMPLATE = lib

CONFIG(release, debug|release): DESTDIR = ../../bin/libs
CONFIG(debug, debug|release): DESTDIR = ../../bind/libs

DEFINES += GUI_TA_MSGBOX_LIBRARY

SOURCES += gui_ta_msgbox.cpp \
    msgboxdlg.cpp

HEADERS += gui_ta_msgbox.h\
        gui_ta_msgbox_global.h \
    msgboxdlg.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    msgboxdlg.ui
