#-------------------------------------------------
#
# Project created by QtCreator 2018-12-18T10:17:31
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TreeResults
TEMPLATE = app

CONFIG(release, debug|release): DESTDIR = ../../bin
CONFIG(debug, debug|release): DESTDIR = ../../bind

SOURCES += main.cpp\
        mainwindow.cpp \
    tasqlquerymodel.cpp

HEADERS  += mainwindow.h \
    tasqlquerymodel.h

FORMS    += mainwindow.ui

RC_FILE += ate_rst.rc

DISTFILES += \
    ate_rst.rc

RESOURCES += \
    res.qrc
