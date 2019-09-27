#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

#include "shape.hpp"


class Rectangle : public Shape
{
    public:
        Rectangle(float width, float height);
        float Perimeter();
        float Surface();

    private:
        float width;
        float height;
};

#endif /*RECTANGLE_HPP_*/