#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include "shape.hpp"

class Circle : public Shape
{
    public:
        Circle(float radius);
        float Perimeter();
        float Surface();

    private:
        float radius;
};

#endif /* CIRCLE_HPP_ */