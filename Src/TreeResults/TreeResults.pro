#-------------------------------------------------
#
# Project created by QtCreator 2018-12-18T10:17:31
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TreeResults
TEMPLATE = app

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
    ate_rst.rc

RESOURCES += \
    res.qrc
