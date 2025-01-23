# Find includes in corresponding build directories
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

set(INCLUDE_FILES
    ScintillaEdit.h
    ScintillaDocument.h
    ../ScintillaEditBase/ScintillaEditBase.h
    ../ScintillaEditBase/ScintillaQt.h
)

set(SOURCE_FILES
    ScintillaEdit.cpp
    ScintillaDocument.cpp
    ../ScintillaEditBase/PlatQt.cpp
    ../ScintillaEditBase/ScintillaQt.cpp
    ../ScintillaEditBase/ScintillaEditBase.cpp
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
    ../../src/CellBuffer.cxx
    ../../src/CaseFolder.cxx
    ../../src/CaseConvert.cxx
    ../../src/CallTip.cxx
    ../../src/AutoComplete.cxx
)

# Create code for QObjects
set(CMAKE_AUTOMOC On)

# Create code from resource files
set(CMAKE_AUTORCC ON)


add_library(ScintillaEdit STATIC
    ${SOURCE_FILES}
    ${INCLUDE_FILES}
)

target_include_directories(ScintillaEdit PUBLIC
    ../../include
    ../../src
    ../ScintillaEditBase
)

target_compile_definitions(ScintillaEdit PUBLIC -DSCINTILLA_QT)
target_compile_definitions(ScintillaEdit PUBLIC -DMAKING_LIBRARY)
target_compile_definitions(ScintillaEdit PUBLIC -D_CRT_SECURE_NO_DEPRECATE)

target_link_libraries(ScintillaEdit
    Qt5::Core
    Qt5::Widgets
    Qt5::Gui
)
