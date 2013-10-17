cmake_minimum_required (VERSION 2.6)
project(WebKitTi)

set(INSTALL_INC_DIR "${CMAKE_INSTALL_PREFIX}/include")
set(INSTALL_LIB_DIR "${CMAKE_INSTALL_PREFIX}/lib")

include_directories(include)
file(GLOB_RECURSE SRC_FILES src *.cpp)
add_library(KGL SHARED ${SRC_FILES})

find_package(PkgConfig REQUIRED)
pkg_check_modules(WebKitGtk REQUIRED webkitgtk-3.0)
include_directories(${WebKitGTK_INCLUDE_DIRS})
link_directories(${WebKitGTK_LIBRARY_DIRS})
add_definitions(${WebKitGTK_CFLAGS_OTHER})

install(DIRECTORY include/KTL DESTINATION "${INSTALL_INC_DIR}")
install(TARGETS KTL LIBRARY DESTINATION "${INSTALL_LIB_DIR}")
