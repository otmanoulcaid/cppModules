#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor is called" << std::endl;
}

DiamondTrap:: DiamondTrap(std::string name)
{
	this->name = name;
	this->__hitPoint = 100;
	this->__energyPoint = 50;
	this->__attackDamage = 30;
	ClapTrap::name = name.append("_clap_name");
	std::cout << "DiamondTrap constructor is called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& clap)
{
	std::cout << "DiamondTrap copy constructor is called" << std::endl;
	*this = clap;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& trap)
{
	std::cout << "DiamondTrap copy assignement operator is called" << std::endl;
	if (this != &trap)
	{
		this->name = trap.name;
		this->__attackDamage = trap.__attackDamage;
		this->__hitPoint = trap.__hitPoint;
		this->__energyPoint = trap.__energyPoint;
	}
	return *this;
}

int	DiamondTrap::get(void)
{
	return (this->__hitPoint);
}

void	DiamondTrap::WhoAmI(void)
{
	std::cout << "DiamondTrap name " << this->name << " >>>><<<< ClapTrap Name " << ClapTrap::name << std::endl;
}
