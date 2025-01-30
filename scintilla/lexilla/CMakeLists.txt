

file(GLOB_RECURSE source CONFIGURE_DEPENDS *.h *.cpp *.cxx)

add_library(lexilla STATIC
    ${source}
)

target_include_directories(lexilla PUBLIC
    ../include
    ./include
    ./lexlib
    ./access
#    ../ScintillaEditBase
)

#target_link_libraries(lexilla Qt5::Core Qt5::Widgets Qt5::Gui)


set_target_properties(lexilla PROPERTIES LINKER_LANGUAGE CXX)