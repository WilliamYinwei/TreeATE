QT += core script sql
QT -= gui

CONFIG += c++11

TARGET = TestEngine
CONFIG += console
CONFIG -= app_bundle

CONFIG(release, debug|release): DESTDIR = ../../bin
CONFIG(debug, debug|release): DESTDIR = ../../bind

TEMPLATE = app

SOURCES += main.cpp \
    outputstd.cpp \
    unitmgr.cpp \
    outputmgr.cpp \
    testrunner.cpp \
    resultmgr.cpp \
    testctrl.cpp \
    outputlocal.cpp

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
    outputlocal.h
