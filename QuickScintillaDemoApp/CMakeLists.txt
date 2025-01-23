find_package(Qt5 COMPONENTS Widgets OpenGL Quick QuickWidgets QuickControls2 PrintSupport Svg REQUIRED)
find_package(Threads REQUIRED)

message(STATUS "Found Qt5 version ${Qt5_VERSION}: ${Qt5_DIR}")

#add_custom_target(
#    clean_resource_file
#    COMMAND ${CMAKE_COMMAND} -E remove -f ${PROJECT_BINARY_DIR}/ui/zenoedit/qrc_font.o
#    COMMAND ${CMAKE_COMMAND} -E remove -f ${PROJECT_BINARY_DIR}/ui/zenoedit/qrc_icons.o
#)

file(GLOB_RECURSE source CONFIGURE_DEPENDS *.h *.cpp *.ui)
file(GLOB_RECURSE resource CONFIGURE_DEPENDS *.qrc)

set(qmlsource
    app.qml
    app5.qml
    SimpleScrollBar.qml
)

qt5_add_resources(source ${resource})

add_executable(QuickScintillaDemoApp ${source} ${qmlsource})

set_property(TARGET QuickScintillaDemoApp PROPERTY AUTOUIC ON)
set_property(TARGET QuickScintillaDemoApp PROPERTY AUTOMOC ON)
set_property(TARGET QuickScintillaDemoApp PROPERTY AUTORCC ON)
set_property(TARGET QuickScintillaDemoApp PROPERTY WIN32_EXECUTABLE OFF)
set_property(DIRECTORY APPEND PROPERTY COMPILE_DEFINITIONS $<$<CONFIG:Debug>:QT_QML_DEBUG>)

target_link_libraries(QuickScintillaDemoApp PRIVATE Qt5::Widgets Qt5::OpenGL Qt5::Svg Qt5::Network Qt5::Quick Qt5::QuickWidgets Qt5::QuickControls2)
target_link_libraries(QuickScintillaDemoApp PUBLIC ScintillaEditBase)

target_include_directories(QuickScintillaDemoApp PUBLIC Qt5::QuickControls2 ScintillaEditBase ScintillaEdit)

target_include_directories(QuickScintillaDemoApp PRIVATE 
    ../scintilla/qt/ScintillaEdit
    ../scintilla/qt/ScintillaEditBase
    ../scintilla/include
    ../scintilla/lexilla/src
    ../scintilla/lexlib
    ../scintilla/src
)
