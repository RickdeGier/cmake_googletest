# Unit test CMakeList
cmake_minimum_required(VERSION 3.10)


# function that generates and makes a target for a given library or given libraries
function(generate_test_executable 
        EXECUTABLE_NAME executable_name
        TEST_SOURCES test_sources
        TEST_LIBS test_libs
        TARGET_NAME target_name
    )

    # generate executable
    add_executable(${executable_name} ${test_sources})

    # Link test executable against gtest & gtest_main
    target_link_libraries(${executable_name} PUBLIC 
        gtest_main
        ${test_libs}
    )

    # generate custom target to invoke using make
    add_custom_target(${target_name})
    add_dependencies(${target_name} ${executable_name})

    # add tests
    add_test(
        NAME ${executable_name} 
        COMMAND ${executable_name}
    )

    # add command to run unit test if specific target is build
    add_custom_command(
        TARGET ${target_name}
        POST_BUILD
        COMMAND ${executable_name}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Running ${target}" VERBATIM
    )

endfunction()


# generate test executables for all libraries
# define shape test sources
set(shape_sources 
    shapes_test.cpp
)

# generate googletest for shape library
generate_test_executable(
    EXECUTABLE_NAME gtest_shape
    TEST_SOURCES "${shape_sources}"
    TEST_LIBS shape_lib
    TARGET_NAME shape
)

#define animals test sources
set(animals_sources
    animals_test.cpp
)

# generate googletest for animals library
generate_test_executable(
    EXECUTABLE_NAME gtest_animals
    TEST_SOURCES "${animals_sources}"
    TEST_LIBS animals_lib
    TARGET_NAME animals
)


# define all test sources
set(all_sources
    shapes_test.cpp  
    animals_test.cpp
)

# define all libs
set(all_libs 
    shape_lib
    animals_lib
)

# generate test executable for all libs and test sources
generate_test_executable(
    EXECUTABLE_NAME gtest_all
    TEST_SOURCES "${all_sources}"
    TEST_LIBS "${all_libs}"
    TARGET_NAME tests
)