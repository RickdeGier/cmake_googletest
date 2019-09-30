#ifndef DOG_HPP_
#define DOG_HPP_

#include "animal.hpp"


class Dog : public Animal
{
    public:
        Dog(std::string name);
        void makeSound();
        void printType();
        void printName();
};

#endif /* DOG_HPP_ */