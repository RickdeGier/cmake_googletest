#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>


class Animal
{
    public:
        virtual void makeSound() = 0;
        virtual void printType() = 0;
        virtual void printName() = 0;
    protected:
        std::string name = "";
};

#endif /*ANIMAL_HPP_*/