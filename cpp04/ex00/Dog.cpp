#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << "Dog default constructor is called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor is called" << std::endl;
}

Dog::Dog(Dog& Dog)
{
    std::cout << "Dog copy constructor is called" << std::endl;
    *this = Dog;
}

Dog& Dog::operator=(Dog& Dog)
{
    std::cout << "Dog copy constructor is called" << std::endl;
    if (this != &Dog)
        this->type = Dog.type;
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "rrrrrrrrrrrr" << std::endl;
}
