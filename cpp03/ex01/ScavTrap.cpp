#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor is called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scav)
{
	std::cout << "ScavTrap copy constructor is called" << std::endl;
	*this = scav;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scav)
{
	std::cout << "ScavTrap copy assignement operator is called" << std::endl;
	if (this != &scav)
	{
		this->name = scav.name;
		this->__attackDamage = scav.__attackDamage;
		this->__energyPoint = scav.__energyPoint;
		this->__hitPoint = scav.__hitPoint;
	}
	return *this;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "hello world" << std::endl;
}