#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor is called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int damage)
{
	std::cout << "ClapTrap constructor is called" << std::endl;
	this->name = name;
	this->__hitPoint = hit;
	this->__energyPoint = energy;
	this->__attackDamage = damage;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "ClapTrap copy constructor is called" << std::endl;
	*this = clap;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& clap)
{
	std::cout << "ClapTrap copy assignement operator is called" << std::endl;
	if (this != &clap)
	{
		this->name = clap.name;
		this->__attackDamage = clap.__attackDamage;
		this->__hitPoint = clap.__hitPoint;
		this->__energyPoint = clap.__energyPoint;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->__energyPoint > 0 && this->__hitPoint > 0)
	{
		this->__energyPoint--;
		std::cout << "ClapTrap " << this->name <<  " attacks " << target << " causing " << 1 << " points of damage\n";
	}
	else
		std::cout << "there is no more energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->__hitPoint >= amount)
	{
		std::cout << "ClapTrap take damage" << std::endl;
		this->__hitPoint -= amount;
	}
	else
		std::cout << "there is no more hitPoints" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->__energyPoint >= amount)
	{
		std::cout << "ClapTrap " << this->name << " repaire itself" << std::endl;
		this->__hitPoint += amount;
		this->__energyPoint -= amount;
	}
	else
		std::cout << "there is no more energy points" << std::endl;
}

