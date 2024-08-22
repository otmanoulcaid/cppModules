/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:34:53 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 17:00:52 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor is called" << std::endl;
}

DiamondTrap:: DiamondTrap(std::string name) 
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 30;
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
		this->attackDamage = trap.attackDamage;
		this->hitPoint = trap.hitPoint;
		this->energyPoint = trap.energyPoint;
	}
	return *this;
}

void	DiamondTrap::WhoAmI(void)
{
	std::cout << "DiamondTrap name >>>> " << this->name << " <<<< ClapTrap Name >>>> " << ClapTrap::name << " <<<< " << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}