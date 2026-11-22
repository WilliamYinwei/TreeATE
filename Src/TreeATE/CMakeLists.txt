# 2026-11-22 与 qmake 共用 version.h 作为唯一版本源
file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/version.h" TREEATE_VERSION_LINE REGEX "TREEATE_VERSION_STR")
string(REGEX MATCH "\"([0-9]+\\.[0-9]+\\.[0-9]+)\"" TREEATE_VERSION_MATCH "${TREEATE_VERSION_LINE}")
set(TREEATE_VERSION "${CMAKE_MATCH_1}")
if(NOT TREEATE_VERSION)
    message(FATAL_ERROR "Cannot read TREEATE_VERSION_STR from version.h")
endif()

qt_add_executable(TreeATE WIN32 MACOSX_BUNDLE
    aboutdialog.cpp aboutdialog.h aboutdialog.ui
    login.cpp login.h login.ui
    main.cpp
    mainwindow.cpp mainwindow.h mainwindow.ui
    manybarcodedlg.cpp manybarcodedlg.h manybarcodedlg.ui
    pluginsmgr.cpp pluginsmgr.h
    prjoptdlg.cpp prjoptdlg.h prjoptdlg.ui
    projectmgr.cpp projectmgr.h
    statusdelegate.cpp statusdelegate.h
    syscfgdlg.cpp syscfgdlg.h syscfgdlg.ui
    ta_atetop.cpp ta_atetop.h
    tacustomtreewidget.cpp tacustomtreewidget.h
    tadefine.h
    talabel.cpp talabel.h
    talineedit.cpp talineedit.h
    talogin.h
    talogin_global.h
    tasizedockwidget.cpp tasizedockwidget.h
    tastandmsgbox.cpp tastandmsgbox.h
    tatreewidget.cpp tatreewidget.h
    testmanger.cpp testmanger.h
    testproccess.cpp testproccess.h
    thememanager.cpp thememanager.h
    languagemanager.cpp languagemanager.h
    treeatetop.h
    version.h
    vscodelauncher.cpp vscodelauncher.h
)
qt_add_qml_module(TreeATE
    URI TreeATE
    VERSION ${TREEATE_VERSION}
)

# Avoid collision between executable name and QML module directory (QTBUG-98568).
if(NOT WIN32 AND NOT APPLE)
    set_property(TARGET TreeATE PROPERTY OUTPUT_NAME TreeATE_app)
endif()

target_include_directories(TreeATE PRIVATE
    ../../Libs/TACommon
    ../../Libs/TALocalSocket
)

target_compile_definitions(TreeATE PRIVATE
    QT_MESSAGELOGCONTEXT
)

target_link_directories(TreeATE PRIVATE
    /libs/
)

target_link_libraries(TreeATE PRIVATE
    Qt::Core
    Qt::Gui
    Qt::Network
    Qt::Qml
    TACommon
    TALocalSocket
)


# Resources:
set(res_resource_files
    "ATE.ico"
    "add.png"
    "code.png"
    "exce.png"
    "loading.png"
    "login.jpg"
    "minus.png"
    "modify.png"
    "ng.png"
    "ok.png"
    "pause.png"
    "play.png"
    "running.gif"
)

qt_add_resources(TreeATE "res"
    PREFIX
        "/"
    FILES
        ${res_resource_files}
)
set(res1_resource_files
    "blue.qss"
)

qt_add_resources(TreeATE "res1"
    PREFIX
        "/Qss"
    FILES
        ${res1_resource_files}
)

set(res2_resource_files
    "Themes/classic.qss"
    "Themes/light.qss"
    "Themes/dark.qss"
    "Themes/theme.json"
    "i18n/languages.json"
)

qt_add_resources(TreeATE "res2"
    PREFIX
        "/"
    FILES
        ${res2_resource_files}
)

install(FILES
    Themes/classic.qss
    Themes/light.qss
    Themes/dark.qss
    Themes/theme.json
    DESTINATION Themes
)
install(FILES i18n/languages.json DESTINATION i18n/treeate)

# 2026-11-22 M5：Qt6 的 find_package 不导出 QT_VERSION_MAJOR，改用目标是否存在判断
if(TARGET Qt::Widgets)
    target_link_libraries(TreeATE PRIVATE
        Qt::Widgets
    )
endif()

install(TARGETS TreeATE
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# 2026-11-22 M5：Qt6.11 部署脚本参数改为 OUTPUT_SCRIPT（原 FILENAME_VARIABLE 已移除）
qt_generate_deploy_qml_app_script(
    TARGET TreeATE
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
    DEPLOY_USER_QML_MODULES_ON_UNSUPPORTED_PLATFORM
    MACOS_BUNDLE_POST_BUILD
)
install(SCRIPT ${deploy_script})
