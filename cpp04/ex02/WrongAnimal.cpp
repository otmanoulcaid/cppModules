#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->type = "Wronganimal";
    std::cout << "WrongAnimal default constructor is called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& Wronganimal)
{
    std::cout << "WrongAnimal copy constructor is called" << std::endl;
    *this = Wronganimal;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& Wronganimal)
{
    std::cout << "WrongAnimal copy constructor is called" << std::endl;
    if (this != &Wronganimal)
        this->type = Wronganimal.type;
    return *this;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Wronganimal make sound" << std::endl;
}

std::string    WrongAnimal::getType(void) const
{
    return this->type;
}
