# CMakeLists.txt in 'animals' directory
cmake_minimum_required(VERSION 3.10)

# generate library
add_library(animals_lib SHARED 
    ${CMAKE_CURRENT_LIST_DIR}/dog.cpp
)