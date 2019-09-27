#include "hello_lib/hello.hpp"

Hello::Hello(int bar)
{
    this->bar = bar;
}

void Hello::multiply(int multiplier)
{
    this->bar *= multiplier;
}