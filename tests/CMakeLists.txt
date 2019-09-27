# Unit test CMakeList
cmake_minimum_required(VERSION 3.10)

set(This Example)

set(Sources 
    test.cpp
)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(${This} ${Sources})

# Link test executable against gtest & gtest_main
target_link_libraries(${This} PUBLIC 
    gtest_main
    shape_lib
)

add_test(
    NAME ${This} 
    COMMAND ${This}
)