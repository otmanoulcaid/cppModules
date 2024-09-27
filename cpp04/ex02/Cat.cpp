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

Cat& Cat::operator=(Cat& cat)
{
    std::cout << "Cat copy constructor is called" << std::endl;
    if (this != &cat)
    {
		this->type = cat.type;
		delete this->brain;
		this->brain = new Brain();
		*(this->brain) = *(cat.brain);
	}
    return *this;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meaooooo" << std::endl;
}
