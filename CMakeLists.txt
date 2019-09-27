# Top level CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

# setup C/CXX project with version
project(hello_wsl_cmake VERSION 1.1.0 LANGUAGES C CXX)


# remove gtest and gmock warnings
if (POLICY CMP0048)
  cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)


# report project name that will be build
message(STATUS "CMake for ${CMAKE_PROJECT_NAME}")


# set binary and library output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


# enable testing
enable_testing()

# get googletest from linux install
add_subdirectory(/usr/src/googletest googletest)

# include gtest en gmock
include_directories(
    ${gtest_SOURCE_DIR}/include
    ${gmock_SOURCE_DIR}/include
)


# generate sources and headers variables
set(SOURCES)
#TODO wildcard

# include header directory
include_directories(includes)

# add src directory
add_subdirectory(src)

# generate executable
add_executable(
    ${CMAKE_PROJECT_NAME} 
    ${SOURCES} 
)

# TODO custom targets
# https://stackoverflow.com/questions/25563336/cmakelists-gtest

# link libraries
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE shape_lib)


# add tests to project
add_subdirectory(tests)