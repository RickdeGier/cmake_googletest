# CMakeLists.txt in 'shapes' directory
cmake_minimum_required(VERSION 3.10)

# generate library
add_library(shape_lib SHARED 
    ${CMAKE_CURRENT_LIST_DIR}/circle.cpp
    ${CMAKE_CURRENT_LIST_DIR}/rectangle.cpp
    ${CMAKE_CURRENT_LIST_DIR}/triangle.cpp
)

# add subdirectories to main

# update upperlevel CMakeList source variable
set(SOURCES "${SOURCES}" PARENT_SCOPE)