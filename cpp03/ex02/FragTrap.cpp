#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor is called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& scav)
{
	std::cout << "FragTrap copy constructor is called" << std::endl;
	*this = scav;
}

FragTrap&	FragTrap::operator=(const FragTrap& trap)
{
	std::cout << "FragTrap copy assignement operator is called" << std::endl;
	if (this != &trap)
	{
		this->name = trap.name;
		this->__attackDamage = trap.__attackDamage;
		this->__energyPoint = trap.__energyPoint;
		this->__hitPoint = trap.__hitPoint;
	}
	return *this;
}

void        FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap : give me fiiiiiive " << std::endl;
}
