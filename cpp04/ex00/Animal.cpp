#include "Animal.hpp"

Animal::Animal(void)
{
    this->type = "animal";
    std::cout << "Animal default constructor is called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor is called" << std::endl;
}

Animal::Animal(Animal& animal)
{
    std::cout << "Animal copy constructor is called" << std::endl;
    *this = animal;
}

Animal& Animal::operator=(Animal& animal)
{
    std::cout << "Animal copy constructor is called" << std::endl;
    if (this != &animal)
        this->type = animal.type;
    return *this;
}

void    Animal::makeSound(void) const
{
    std::cout << "animal make sound" << std::endl;
}

std::string    Animal::getType(void) const
{
    return this->type;
}
