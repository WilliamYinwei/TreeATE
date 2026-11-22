qt_add_executable(TestEngine
    ioutput.h
    langqs.cpp langqs.h
    main.cpp
    maintask.cpp maintask.h
    outputlocal.cpp outputlocal.h
    outputmgr.cpp outputmgr.h
    outputstd.cpp outputstd.h
    resultmgr.cpp resultmgr.h
    testctrl.cpp testctrl.h
    testrststruct.h
    testrunner.cpp testrunner.h
    unitmgr.cpp unitmgr.h
)
qt_add_qml_module(TestEngine
    URI TestEngine
    VERSION ${PROJECT_VERSION}
)

# Avoid collision between executable name and QML module directory (QTBUG-98568).
if(NOT WIN32)
    set_property(TARGET TestEngine PROPERTY OUTPUT_NAME TestEngine_app)
endif()

target_include_directories(TestEngine PRIVATE
    ../../Libs/TACommon
)

target_link_directories(TestEngine PRIVATE
    /libs/
)

target_link_libraries(TestEngine PRIVATE
    Qt::Core
    Qt::Qml
    Qt::Sql
    TACommon
)

install(TARGETS TestEngine
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# 2026-11-22 例外 D9：Qt6.11 已移除 FILENAME_VARIABLE，仅将部署脚本参数改为 OUTPUT_SCRIPT
qt_generate_deploy_qml_app_script(
    TARGET TestEngine
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
    DEPLOY_USER_QML_MODULES_ON_UNSUPPORTED_PLATFORM
    MACOS_BUNDLE_POST_BUILD
)
install(SCRIPT ${deploy_script})
