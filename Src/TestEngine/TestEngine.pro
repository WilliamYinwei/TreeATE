QT += core script sql
QT -= gui

CONFIG += c++11

TARGET = TestEngine
CONFIG += console
CONFIG -= app_bundle

CONFIG(release, debug|release): DESTDIR = ../../bin
CONFIG(debug, debug|release): DESTDIR = ../../bind

TEMPLATE = app

include ( ../../3part/PythonQt/build/common.prf )
include ( ../../3part/PythonQt/build/PythonQt.prf )

INCLUDEPATH += ../../3part/PythonQt/include

SOURCES += main.cpp \
    outputstd.cpp \
    unitmgr.cpp \
    outputmgr.cpp \
    testrunner.cpp \
    resultmgr.cpp \
    testctrl.cpp \
    outputlocal.cpp \
    langqs.cpp \
    langpy.cpp \
    maintask.cpp

HEADERS += \
    ioutput.h \
    testrststruct.h \
    outputstd.h \
    unitmgr.h \
    stdinc.h \
    outputmgr.h \
    testrunner.h \
    resultmgr.h \
    testctrl.h \
    outputlocal.h \
    langqs.h \
    imutlilang.h \
    langpy.h \
    maintask.h

linux-g++{
    # for linux
    EXTRA_BINFILES += \
        $${PWD}/OutputCfg.ini
    DESTDIR_LINUX = $${DESTDIR}/Config/
    for(FILE,EXTRA_BINFILES){
        QMAKE_POST_LINK += $$quote(cp $${FILE} $${DESTDIR_LINUX}$$escape_expand(\n\t))
    }
}

win32 {
    # for windows
    EXTRA_BINFILES += \
        $${PWD}/OutputCfg.ini
    EXTRA_BINFILES_WIN = $${EXTRA_BINFILES}
    EXTRA_BINFILES_WIN ~= s,/,\\,g
    DESTDIR_WIN = $${DESTDIR}/Config/
    DESTDIR_WIN ~= s,/,\\,g
    for(FILE,EXTRA_BINFILES_WIN){
        QMAKE_POST_LINK +=$$quote(cmd /c xcopy $${FILE} $${DESTDIR_WIN} /y /e $$escape_expand(\n\t))
    }
}
