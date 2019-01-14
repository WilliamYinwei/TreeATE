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
