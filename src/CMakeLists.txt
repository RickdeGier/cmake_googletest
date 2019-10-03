# CMakeLists.txt in 'src' directory
cmake_minimum_required(VERSION 3.10)

# append directory sources to sources
list(APPEND SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
)

# add subdirectories to main
add_subdirectory(shapes)
add_subdirectory(animals)

# update upperlevel CMakeList source variable
set(SOURCES "${SOURCES}" PARENT_SCOPE)