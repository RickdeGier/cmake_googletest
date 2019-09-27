#include "shapes/rectangle.hpp"


Rectangle::Rectangle(float width, float height)
{
    this->width = width;
    this->height = height;
}

float Rectangle::Perimeter()
{
    return 2 * width + 2 * height;
}

float Rectangle::Surface()
{
    return width * height;
}