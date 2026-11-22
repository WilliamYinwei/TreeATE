#-------------------------------------------------
#
# Project created by QtCreator 2018-12-18T10:17:31
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TreeResults
TEMPLATE = app

# 版本号来自 TreeATE 的单一版本源
INCLUDEPATH += ../TreeATE
VERSION_HEADER = $$cat($$PWD/../TreeATE/version.h, lines)
VERSION_STR_LINE = $$find(VERSION_HEADER, "TREEATE_VERSION_STR")
TREEATE_VERSION = $$replace(VERSION_STR_LINE, ".*\"([0-9]+\\.[0-9]+\\.[0-9]+)\".*", "\\1")
isEmpty(TREEATE_VERSION) {
    error("Cannot read TREEATE_VERSION_STR from ../TreeATE/version.h")
}
VERSION = $$TREEATE_VERSION

contains(QT_ARCH, x86_64) {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x64
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x64
} else {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x86
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x86
}

SOURCES += main.cpp\
        mainwindow.cpp \
    tasqlquerymodel.cpp \
    dlgexport.cpp

HEADERS  += mainwindow.h \
    tasqlquerymodel.h \
    dlgexport.h

FORMS    += mainwindow.ui \
    dlgexport.ui

RC_FILE += ate_rst.rc

DISTFILES += \
    ate_rst.rc \
    Themes/classic.qss \
    Themes/light.qss \
    Themes/dark.qss

TRANSLATIONS += \
    i18n/treeresults_zh.ts \
    i18n/treeresults_en.ts

RESOURCES += \
    res.qrc
