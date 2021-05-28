#-------------------------------------------------
#
# Project created by QtCreator 2018-12-09T12:12:49
#
#-------------------------------------------------

QT       += core gui script
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TreeATE
TEMPLATE = app

CONFIG(release, debug|release): DESTDIR = ../../bin
CONFIG(debug, debug|release): DESTDIR = ../../bind

INCLUDEPATH += ../../Libs/TALocalSocket

SOURCES += main.cpp\
        mainwindow.cpp \
    testproccess.cpp \
    projectmgr.cpp \
    statusdelegate.cpp \
    testmanger.cpp \
    aboutdialog.cpp \
    login.cpp \
    syscfgdlg.cpp \
    prjoptdlg.cpp \
    talineedit.cpp \
    manybarcodedlg.cpp \
    pluginsmgr.cpp \
    tasizedockwidget.cpp \
    tatreewidget.cpp \
    talabel.cpp \
    tacustomtreewidget.cpp \
    tastandmsgbox.cpp

HEADERS  += mainwindow.h \
    testproccess.h \
    projectmgr.h \
    statusdelegate.h \
    testmanger.h \
    aboutdialog.h \
    login.h \
    syscfgdlg.h \
    prjoptdlg.h \
    talineedit.h \
    talogin_global.h \
    talogin.h \
    manybarcodedlg.h \
    pluginsmgr.h \
    tadefine.h \
    tasizedockwidget.h \
    tatreewidget.h \
    talabel.h \
    tacustomtreewidget.h \
    tastandmsgbox.h

FORMS    += mainwindow.ui \
    aboutdialog.ui \
    login.ui \
    syscfgdlg.ui \
    prjoptdlg.ui \
    manybarcodedlg.ui

DISTFILES += \
    ate.rc

RESOURCES += \
    res.qrc

RC_FILE += ate.rc

DEFINES += QT_MESSAGELOGCONTEXT

LIBS += -L$$DESTDIR/libs/ -lTALocalSocket

TRANSLATIONS += $${PWD}/i18n/en.ts \
    $${PWD}/i18n/zh.ts

linux-g++{
    # for linux
    QMAKE_POST_LINK += $$quote(lrelease $${TRANSLATIONS}$$escape_expand(\n\t))

    EXTRA_BINFILES += \
        $${PWD}/i18n/*.qm
    DESTDIR_LINUX = $${DESTDIR}/i18n/treeate/
    for(FILE,EXTRA_BINFILES){
        QMAKE_POST_LINK += $$quote(cp $${FILE} $${DESTDIR_LINUX}$$escape_expand(\n\t))
    }
}

win32 {
    # for windows
    QMAKE_POST_LINK +=$$quote(cmd /c lrelease $${TRANSLATIONS}$$escape_expand(\n\t))

    EXTRA_BINFILES += \
        $${PWD}/i18n/*.qm
    EXTRA_BINFILES_WIN = $${EXTRA_BINFILES}
    EXTRA_BINFILES_WIN ~= s,/,\\,g
    DESTDIR_WIN = $${DESTDIR}/i18n/treeate/
    DESTDIR_WIN ~= s,/,\\,g
    for(FILE,EXTRA_BINFILES_WIN){
        QMAKE_POST_LINK +=$$quote(cmd /c xcopy $${FILE} $${DESTDIR_WIN} /y /e $$escape_expand(\n\t))
    }
}
