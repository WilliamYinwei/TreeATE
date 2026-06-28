QT += core script sql
QT -= gui

CONFIG += c++11

TARGET = TestEngine
CONFIG += console
CONFIG -= app_bundle

contains(QT_ARCH, x86_64) {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x64
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x64
} else {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x86
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x86
}

INCLUDEPATH += ../../Libs/TACommon

LIBS += -L$$DESTDIR/libs/ -lTACommon

TEMPLATE = app

DISTFILES += \
    ate_te.rc

RC_FILE += ate_te.rc

SOURCES += main.cpp \
    outputstd.cpp \
    unitmgr.cpp \
    outputmgr.cpp \
    testrunner.cpp \
    resultmgr.cpp \
    testctrl.cpp \
    outputlocal.cpp \
    langqs.cpp \
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
    maintask.h

unix: {
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
