# Unit test CMakeList
cmake_minimum_required(VERSION 3.10)


# generate ..._lib_test variable
# generate variable for all google tests
set(all_lib_test gtest_all)
# generate library specific tests
set(shape_lib_test gtest_shape)
set(animals_lib_test gtest_animals)

set(test_executable_name unittest)

# define test sources
# define shape test sources
set(shape_sources 
    shapes_test.cpp
)

#define animals test sources
set(animals_sources
    animals_test.cpp
)

# define all test sources
set(all_sources
    shapes_test.cpp  
    animals_test.cpp

)

# ALL SOURCES
# Link runTests with what we want to test and the GTest and pthread library
add_executable(${all_lib_test} ${all_sources})

# Link test executable against gtest & gtest_main
target_link_libraries(${all_lib_test} PUBLIC 
    gtest_main
    shape_lib
    animals_lib
)

add_custom_target(tests)
add_dependencies(tests ${all_lib_test})

# add tests
add_test(
    NAME ${all_lib_test} 
    COMMAND ${all_lib_test}
)

# TODO think out if this is needed
add_custom_command(
    TARGET ${all_lib_test}
    POST_BUILD
    COMMAND ${all_lib_test}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running ${target}" VERBATIM
)

# SHAPE LIBRARY SOURCES
# Link runTests with what we want to test and the GTest and pthread library
add_executable(${shape_lib_test} ${shape_sources})

# Link test executable against gtest & gtest_main
target_link_libraries(${shape_lib_test} PUBLIC 
    gtest_main
    shape_lib
)

add_custom_target(test_shape)
add_dependencies(test_shape ${shape_lib_test})

# add tests
add_test(
    NAME ${shape_lib_test} 
    COMMAND ${shape_lib_test}
)

add_custom_command(
    TARGET ${shape_lib_test}
    POST_BUILD
    COMMAND ${shape_lib_test}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running ${target}" VERBATIM
)


# ANIMALS SOURCES
# Link runTests with what we want to test and the GTest and pthread library
add_executable(${animals_lib_test} ${animals_sources})

# Link test executable against gtest & gtest_main
target_link_libraries(${animals_lib_test} PUBLIC 
    gtest_main
    animals_lib
)

add_custom_target(test_animals)
add_dependencies(test_animals ${animals_lib_test})

# add tests
add_test(
    NAME ${animals_lib_test} 
    COMMAND ${animals_lib_test}
)

add_custom_command(
    TARGET ${animals_lib_test}
    POST_BUILD
    COMMAND ${animals_lib_test}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running ${target}" VERBATIM
)