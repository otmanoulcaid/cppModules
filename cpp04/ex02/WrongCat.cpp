#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor is called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor is called" << std::endl;
}

WrongCat::WrongCat(WrongCat& WrongCat)
{
    std::cout << "WrongCat copy constructor is called" << std::endl;
    *this = WrongCat;
}

WrongCat& WrongCat::operator=(WrongCat& WrongCat)
{
    std::cout << "WrongCat copy constructor is called" << std::endl;
    if (this != &WrongCat)
        this->type = WrongCat.type;
    return *this;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Meaooooo" << std::endl;
}
