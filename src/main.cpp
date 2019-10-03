#include <iostream>

#include "shapes/shape.hpp"
#include "shapes/rectangle.hpp"
#include "shapes/triangle.hpp"
#include "shapes/circle.hpp"


int main(int argc, char** argv)
{
    int a, b, c, d, e, f, g, h, i;
    a = 0;
    b = 5;
    c = a + b;
    d = b * c;

    Circle circle = Circle(3.5);
    Rectangle rectangle = Rectangle(3, 2);
    Triangle triangle = Triangle(3, 2);

    Shape *shape_circle = &circle;
    Shape *shape_new_rectangle = new Rectangle(3.5, 2.1);

    Rectangle test = *((Rectangle*)shape_new_rectangle);
    std::cout << triangle.Perimeter() << std::endl;
    std::cout << circle.Perimeter() << std::endl;
    std::cout << triangle.Perimeter() << std::endl;

    std::cout << shape_circle->Perimeter() << std::endl;
    std::cout << shape_new_rectangle->Perimeter() << std::endl;
    
    e = 2;
    f = d + e;

    

    std::cout << e << std::endl;
    std::cout << "Hello is it me you're looking for?";

}