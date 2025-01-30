# Find includes in corresponding build directories
find_package(Qt5 COMPONENTS Core Gui Widgets Quick QuickWidgets QuickControls2 Svg REQUIRED)

set(INCLUDE_FILES
    PlatQt.h
    ScintillaQt.h
    ScintillaEditBase.h
    ZfxLexer.h
    ../../src/XPM.h
    ../../src/ViewStyle.h
    ../../src/UniConversion.h
    ../../src/Style.h
    ../../src/SplitVector.h
    ../../src/Selection.h
    ../../src/ScintillaBase.h
    ../../src/RunStyles.h
    ../../src/RESearch.h
    ../../src/PositionCache.h
    ../../src/Platform.h
    ../../src/PerLine.h
    ../../src/Partitioning.h
    ../../src/LineMarker.h
    ../../src/KeyMap.h
    ../../src/Indicator.h
    ../../src/Geometry.h
    ../../src/Editor.h
    ../../src/Document.h
    ../../src/Decoration.h
    ../../src/ContractionState.h
    ../../src/CharClassify.h
    ../../src/CharacterType.h
    ../../src/CharacterCategoryMap.h
    ../../src/ChangeHistory.h
    ../../src/CellBuffer.h
    ../../src/CaseFolder.h
    ../../src/CaseConvert.h
    ../../src/CallTip.h
    ../../src/AutoComplete.h
    ../../include/Scintilla.h
    ../../include/ILexer.h
)

set(SOURCE_FILES
    PlatQt.cpp
    ScintillaQt.cpp
    ScintillaEditBase.cpp
    ZfxLexer.cpp
    ../../src/XPM.cxx
    ../../src/ViewStyle.cxx
    ../../src/UniqueString.cxx
    ../../src/UniConversion.cxx
    ../../src/Style.cxx
    ../../src/Selection.cxx
    ../../src/ScintillaBase.cxx
    ../../src/RunStyles.cxx
    ../../src/RESearch.cxx
    ../../src/PositionCache.cxx
    ../../src/PerLine.cxx
    ../../src/MarginView.cxx
    ../../src/LineMarker.cxx
    ../../src/KeyMap.cxx
    ../../src/Indicator.cxx
    ../../src/Geometry.cxx
    ../../src/EditView.cxx
    ../../src/Editor.cxx
    ../../src/EditModel.cxx
    ../../src/Document.cxx
    ../../src/Decoration.cxx
    ../../src/DBCS.cxx
    ../../src/ContractionState.cxx
    ../../src/CharClassify.cxx
    ../../src/CharacterType.cxx
    ../../src/CharacterCategoryMap.cxx
    ../../src/ChangeHistory.cxx
    ../../src/CellBuffer.cxx
    ../../src/CaseFolder.cxx
    ../../src/CaseConvert.cxx
    ../../src/CallTip.cxx
    ../../src/AutoComplete.cxx
    ../../src/UndoHistory.cxx
)

# Create code for QObjects
set(CMAKE_AUTOMOC On)

# Create code from resource files
set(CMAKE_AUTORCC ON)


add_library(ScintillaEditBase STATIC
    ${SOURCE_FILES}
    ${INCLUDE_FILES}
)

target_include_directories(ScintillaEditBase PUBLIC
    ../../include
    ../../src
)

target_compile_definitions(ScintillaEditBase PUBLIC -DSCINTILLA_QT_QML)
target_compile_definitions(ScintillaEditBase PUBLIC -DMAKING_LIBRARY)
target_compile_definitions(ScintillaEditBase PUBLIC -D_CRT_SECURE_NO_DEPRECATE)

target_link_libraries(ScintillaEditBase
    Qt5::Core
    Qt5::Widgets
    Qt5::Gui
    Qt5::Quick
    lexilla
)
