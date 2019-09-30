#include "animals/dog.hpp"

#include <iostream>


Dog::Dog(std::string name)
{
    this->name = name;
}

void Dog::makeSound()
{
    std::cout << "Bark!";
}

void Dog::printType()
{
    std::cout <<"Dog";
}

void Dog::printName()
{
    std::cout << this->name << std::endl;
}