/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:27:43 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 16:27:44 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default constructor is called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
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
		this->attackDamage = scav.attackDamage;
		this->energyPoint = scav.energyPoint;
		this->hitPoint = scav.hitPoint;
	}
	return *this;
}

void        ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}


void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
		this->energyPoint--;
		std::cout << "ScavTrap " << this->name <<  " attacks " << target << " causing " << 1 << " points of damage\n";
	}
	else
		std::cout << "ScavTrap has no more energy points" << std::endl;
}
