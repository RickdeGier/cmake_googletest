# Unit test CMakeList
cmake_minimum_required(VERSION 3.10)


# generate shape_lib_test variable
set(shape_lib_test shape_lib_test)
set(animals_lib_test animals_lib_test)

set(all_sources
    shapes_test.cpp  
    animals_test.cpp

)
set(shape_sources 
    shapes_test.cpp
)

set(animals_sources
    animals_test.cpp
)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(${shape_lib_test} ${all_sources})

# Link test executable against gtest & gtest_main
target_link_libraries(${shape_lib_test} PUBLIC 
    gtest_main
    shape_lib
    animals_lib
)

# add tests
add_test(
    NAME ${shape_lib_test} 
    COMMAND ${shape_lib_test}
)