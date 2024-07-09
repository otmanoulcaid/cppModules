#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat default constructor is called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat(void)
{
    delete brain;
    std::cout << "Cat destructor is called" << std::endl;
}

Cat::Cat(Cat& Cat)
{
    std::cout << "Cat copy constructor is called" << std::endl;
    *this = Cat;
}

Cat& Cat::operator=(Cat& Cat)
{
    std::cout << "Cat copy constructor is called" << std::endl;
    if (this != &Cat)
        this->type = Cat.type;
    return *this;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meaooooo" << std::endl;
}
