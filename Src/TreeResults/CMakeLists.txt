qt_add_executable(TreeResults WIN32 MACOSX_BUNDLE
    dlgexport.cpp dlgexport.h dlgexport.ui
    main.cpp
    mainwindow.cpp mainwindow.h mainwindow.ui
    tasqlquerymodel.cpp tasqlquerymodel.h
)
# 2026-11-21 M4：本工程仅支持 Qt6，直接链接 Widgets（原 QT_VERSION_MAJOR 条件在 Qt6 下恒为假，导致缺少 Widgets 头文件）
target_link_libraries(TreeResults PRIVATE
    Qt::Core
    Qt::Gui
    Qt::Sql
    Qt::Widgets
)

# 版本号来自 TreeATE 的单一版本源
target_include_directories(TreeResults PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/../TreeATE"
)


# Resources:
set(res_resource_files
    "ChevronLeft.png"
    "ChevronRight.png"
    "FristPage.png"
    "LastPage.png"
    "ate_rst.ico"
    "output.png"
    "search.png"
    "Themes/classic.qss"
    "Themes/light.qss"
    "Themes/dark.qss"
    "i18n/treeresults_zh.qm"
    "i18n/treeresults_en.qm"
)

qt_add_resources(TreeResults "res"
    PREFIX
        "/"
    FILES
        ${res_resource_files}
)

install(TARGETS TreeResults
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# 2026-11-21 M4：Qt6 部署脚本参数为 OUTPUT_SCRIPT，修正原 FILENAME_VARIABLE 导致配置失败
qt_generate_deploy_app_script(
    TARGET TreeResults
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
