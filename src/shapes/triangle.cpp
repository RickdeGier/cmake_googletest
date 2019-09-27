#include "shapes/triangle.hpp"


Triangle::Triangle(float width, float height)
{
    this->width = width;
    this->height = height;
}

float Triangle::Perimeter()
{
    return 2 * width + 2 * height;
}

float Triangle::Surface()
{
    return width * height;
}