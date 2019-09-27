# CMakeLists.txt in 'hello_lib' directory
cmake_minimum_required(VERSION 3.10)

# append directory sources to sources
list(APPEND SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/hello.cpp
)

# add subdirectories to main

# update upperlevel CMakeList source variable
set(SOURCES "${SOURCES}" PARENT_SCOPE)