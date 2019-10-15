#include "gtest/gtest.h"

#include "animals/dog.hpp"

TEST(animals_dog, creation)
{
    Dog rect = Dog("alfa");
    std::string expected = "bark!";
    std::string actual = "bark!";
    EXPECT_EQ(expected, actual);
}

TEST(animals_dog, beaviour)
{
    Dog rect = Dog("beta");
    float expected = 6.0;
    float actual = 6.0;
    EXPECT_EQ(expected, actual);
}