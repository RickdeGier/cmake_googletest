# Unit test CMakeList
cmake_minimum_required(VERSION 3.10)

#define animals test sources
set(animals_sources
    ${CMAKE_CURRENT_LIST_DIR}/animals_test.cpp
)

# add shape test sources to test sources
list(APPEND test_sources
    ${animals_sources}
)

# generate googletest for animals library
generate_test_executable(
    EXECUTABLE_NAME gtest_animals
    TEST_SOURCES "${animals_sources}"
    TEST_LIBS animals_lib
    TARGET_NAME animals
)

# update test sources in parent scope
set(test_sources "${test_sources}" PARENT_SCOPE)