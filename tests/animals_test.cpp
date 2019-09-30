#include "gtest/gtest.h"

#include "animals/dog.hpp"

TEST(sample_test_case_2, adfad)
{
    Dog rect = Dog("alfa");
    std::string expected = "bark!";
    std::string actual = "bark!";
    EXPECT_EQ(expected, actual);
}

TEST(sample_test_case_2, dafad)
{
    Dog rect = Dog("beta");
    float expected = 6.0;
    float actual = 2.0;
    EXPECT_EQ(expected, actual);
}