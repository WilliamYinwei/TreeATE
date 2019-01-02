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
    tasizedockwidget.cpp

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
    tasizedockwidget.h

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

TRANSLATIONS += $$PWD/i18n/en.ts \
    $$PWD/i18n/zh.ts
