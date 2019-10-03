# Unit test CMakeList
cmake_minimum_required(VERSION 3.10)

# generate test executables for all libraries
# define shape test sources
set(shape_sources 
    ${CMAKE_CURRENT_LIST_DIR}/shapes_test.cpp
)

# add shape test sources to test sources
list(APPEND test_sources
    ${shape_sources}
)

# generate googletest for shape library
generate_test_executable(
    EXECUTABLE_NAME gtest_shape
    TEST_SOURCES "${shape_sources}"
    TEST_LIBS shape_lib
    TARGET_NAME shape
)

# update test sources in parent scope
set(test_sources "${test_sources}" PARENT_SCOPE)