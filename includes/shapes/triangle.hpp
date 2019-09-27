#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_

#include "shape.hpp"

class Triangle : public Shape
{
    public:
        Triangle(float width, float height);
        float Perimeter();
        float Surface();

    private:
        float width;
        float height;
};

#endif /* TRIANGLE_HPP_ */