# Top level CMakeLists.txt
cmake_minimum_required(VERSION 3.10)


# project version settings
# setup C/CXX project with version
project(hello_wsl_cmake VERSION 1.1.0 LANGUAGES C CXX)


# report project name that will be build
message(STATUS "CMake for ${CMAKE_PROJECT_NAME}")

# project file management
# set binary and library output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(EXECUTABLE_NAME "projectname")


# import sources and headers
# generate sources and headers variables
set(SOURCES)

# include header directory
include_directories(includes)

# add src directory
add_subdirectory(src)


# generate executable
add_executable(
    ${EXECUTABLE_NAME} 
    ${SOURCES} 
)

# link libraries
target_link_libraries(${EXECUTABLE_NAME} PRIVATE shape_lib)
target_link_libraries(${EXECUTABLE_NAME} PRIVATE animals_lib)


# googletest and gmock config
# enable testing
enable_testing()

#include(GoogleTest)
# get googletest from linux install
add_subdirectory(/usr/src/googletest googletest)

# include gtest en gmock
include_directories(
    ${gtest_SOURCE_DIR}/include
    ${gmock_SOURCE_DIR}/include
)

# add tests to project
add_subdirectory(tests)


# generate multiple targets to build specific parts
#add_custom_target(tests)
#add_dependencies(tests shape_lib_test)
