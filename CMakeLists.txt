cmake_minimum_required(VERSION 3.15)

project(QuickScintilla)

# Please use VS2019+ or GCC 9+
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(QuickScintillaDemoApp)
add_subdirectory(scintilla/qt/ScintillaEdit)
add_subdirectory(scintilla/qt/ScintillaEditBase)