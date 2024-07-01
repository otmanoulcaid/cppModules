#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::Weapon(void)
{
	std::cout << "default constructor is called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "the destructor is called" << std::endl;
}

const std::string&	Weapon::getType(void)
{
	return this->type;
}

void		Weapon::setType(std::string type)
{
	this->type = type;
}
