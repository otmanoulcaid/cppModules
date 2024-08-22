/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:35:08 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 16:35:09 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap default constructor is called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
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
		this->attackDamage = trap.attackDamage;
		this->energyPoint = trap.energyPoint;
		this->hitPoint = trap.hitPoint;
	}
	return *this;
}

void        FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap : give me fiiiiiive " << std::endl;
}

