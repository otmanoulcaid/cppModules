#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::HumanA(void)
{
	std::cout << "default constructor is called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "the destructor is called" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << "baaam" << std::endl;
}
