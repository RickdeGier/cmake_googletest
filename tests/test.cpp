#include "gtest/gtest.h"

#include "shapes/rectangle.hpp"

TEST(sample_test_case, perimeter)
{
    Rectangle rect = Rectangle(3, 2);
    float expected = 10.0;
    float actual = rect.Perimeter();
    EXPECT_EQ(expected, actual);
}

TEST(sample_test_case, surface)
{
    Rectangle rect = Rectangle(3, 2);
    float expected = 6.0;
    float actual = rect.Surface();
    EXPECT_EQ(expected, actual);
}