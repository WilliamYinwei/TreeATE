#-------------------------------------------------
#
# Project created by QtCreator 2018-12-09T12:12:49
#
#-------------------------------------------------

QT       += core gui qml
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TreeATE
TEMPLATE = app

# 2026-11-22 版本号统一从 version.h 读取，避免 .pro 内重复写死
VERSION_HEADER = $$cat($$PWD/version.h, lines)
VERSION_STR_LINE = $$find(VERSION_HEADER, "TREEATE_VERSION_STR")
TREEATE_VERSION = $$replace(VERSION_STR_LINE, ".*\"([0-9]+\\.[0-9]+\\.[0-9]+)\".*", "\\1")
isEmpty(TREEATE_VERSION) {
    error("Cannot read TREEATE_VERSION_STR from version.h")
}
VERSION = $$TREEATE_VERSION

contains(QT_ARCH, x86_64) {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x64
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x64
} else {
    CONFIG(release, debug|release): DESTDIR = ../../bin/x86
    CONFIG(debug, debug|release): DESTDIR = ../../bind/x86
}

INCLUDEPATH += $$PWD/../../Libs/TALocalSocket \
    $$PWD/../../Libs/TACommon

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
    tastandmsgbox.cpp \
    vscodelauncher.cpp \
    thememanager.cpp \
    languagemanager.cpp \
    ta_atetop.cpp

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
    tastandmsgbox.h \
    treeatetop.h \
    vscodelauncher.h \
    thememanager.h \
    languagemanager.h \
    version.h \
    ta_atetop.h

FORMS    += mainwindow.ui \
    aboutdialog.ui \
    login.ui \
    syscfgdlg.ui \
    prjoptdlg.ui \
    manybarcodedlg.ui

DISTFILES += \
    ate.rc \
    version.h \
    Themes/classic.qss \
    Themes/light.qss \
    Themes/dark.qss \
    Themes/theme.json \
    i18n/languages.json

RESOURCES += \
    res.qrc

RC_FILE += ate.rc

DEFINES += QT_MESSAGELOGCONTEXT

LIBS += -L$$DESTDIR/libs/ -lTALocalSocket -lTACommon

win32:TRANSLATIONS += $${PWD}/i18n/en.ts \
    $${PWD}/i18n/zh.ts
unix:TRANSLATIONS += $$PWD/i18n/en.ts \
    $$PWD/i18n/zh.ts

unix {
    # for linux
    QMAKE_POST_LINK += $$quote(lrelease $${TRANSLATIONS}$$escape_expand(\n\t))

    EXTRA_BINFILES += \
        $${PWD}/i18n/*.qm
    DESTDIR_LINUX = $${DESTDIR}/i18n/treeate/
    for(FILE,EXTRA_BINFILES){
        QMAKE_POST_LINK += $$quote(cp $${FILE} $${DESTDIR_LINUX}$$escape_expand(\n\t))
    }

    # 2026-11-22 M2 主题资源与语言清单部署
    THEME_FILES = $$files($${PWD}/Themes/*)
    DESTDIR_THEME_LINUX = $${DESTDIR}/Themes/
    for(FILE,THEME_FILES){
        QMAKE_POST_LINK += $$quote(cp $${FILE} $${DESTDIR_THEME_LINUX}$$escape_expand(\n\t))
    }
    QMAKE_POST_LINK += $$quote(cp $${PWD}/i18n/languages.json $${DESTDIR_LINUX}$$escape_expand(\n\t))
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

    # 2026-11-22 M2 主题资源与语言清单部署
    THEME_FILES = $$files($${PWD}/Themes/*)
    THEME_FILES_WIN = $${THEME_FILES}
    THEME_FILES_WIN ~= s,/,\\,g
    DESTDIR_THEME_WIN = $${DESTDIR}/Themes/
    DESTDIR_THEME_WIN ~= s,/,\\,g
    for(FILE,THEME_FILES_WIN){
        QMAKE_POST_LINK +=$$quote(cmd /c xcopy $${FILE} $${DESTDIR_THEME_WIN} /y /e $$escape_expand(\n\t))
    }
    LANG_MANIFEST_WIN = $${PWD}/i18n/languages.json
    LANG_MANIFEST_WIN ~= s,/,\\,g
    QMAKE_POST_LINK +=$$quote(cmd /c xcopy $${LANG_MANIFEST_WIN} $${DESTDIR_WIN} /y /e $$escape_expand(\n\t))
}
