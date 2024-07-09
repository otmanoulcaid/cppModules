#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor is called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog(void)
{
    delete brain;
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
