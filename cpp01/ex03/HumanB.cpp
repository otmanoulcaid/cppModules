#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(void)
{
	std::cout << "default constructor is called" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "the destructor is called" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << "baaam" << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
