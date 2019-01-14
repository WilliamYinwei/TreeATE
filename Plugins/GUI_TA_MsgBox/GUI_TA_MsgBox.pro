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

win32 {
    # for windows
    EXTRA_BINFILES += \
        $${DESTDIR}/$${TARGET}.dll
    EXTRA_BINFILES_WIN = $${EXTRA_BINFILES}
    EXTRA_BINFILES_WIN ~= s,/,\\,g
    DESTDIR_WIN = $${PWD}/Example/TestDemo/libs \
       $${PWD}/Example/TestDemoPy/libs
    DESTDIR_WIN ~= s,/,\\,g
    for(FILE,EXTRA_BINFILES_WIN){
        QMAKE_POST_LINK +=$$quote(cmd /c xcopy $${FILE} $${DESTDIR_WIN} /y /e $$escape_expand(\n\t))
    }
}
