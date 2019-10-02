#include "shapes/circle.hpp"

#include <math.h>


Circle::Circle(float radius)
{
    this->radius = radius;
}

float Circle::Perimeter()
{
    return 2 * M_PI * radius;
}

float Circle::Surface()
{
    return M_PI * sqrt(radius); 
}
