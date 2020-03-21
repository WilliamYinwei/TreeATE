#-------------------------------------------------
#
# Project created by QtCreator 2018-12-18T10:28:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TreeATEDev
TEMPLATE = app

CONFIG(release, debug|release): DESTDIR = ../../bin
CONFIG(debug, debug|release): DESTDIR = ../../bind

SOURCES += main.cpp\
        mainwindow.cpp \
    tascriptedit.cpp \
    aboutdlg.cpp \
    testunitsmodel.cpp \
    testunititem.cpp \
    tapropertymgr.cpp \
    taprjcfgwidget.cpp \
    newprjdlg.cpp \
    tacsvparser.cpp \
    dlgfind.cpp

HEADERS  += mainwindow.h \
    tascriptedit.h \
    aboutdlg.h \
    testunitsmodel.h \
    testunititem.h \
    tapropertymgr.h \
    taprjcfgwidget.h \
    newprjdlg.h \
    tacsvparser.h \
    ate_dev.rc \
    dlgfind.h

FORMS    += mainwindow.ui \
    aboutdlg.ui \
    newprjdlg.ui \
    dlgfind.ui

RC_FILE += ate_dev.rc

DISTFILES += \
    ate_dev.rc

RESOURCES += \
    res.qrc

CONFIG += qscintilla2
DEFINES += QT_MESSAGELOGCONTEXT
