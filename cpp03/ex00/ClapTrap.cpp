/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:27:00 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 16:27:01 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : 
hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor is called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : 
name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor is called" << std::endl;
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
		this->attackDamage = clap.attackDamage;
		this->hitPoint = clap.hitPoint;
		this->energyPoint = clap.energyPoint;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
		this->energyPoint--;
		std::cout << "ClapTrap " << this->name <<  " attacks " << target \
		<< " causing " << 1 << " points of damage\n";
		std::cout << "energyPoint : " << this->energyPoint << " ; hitPoint : " \
		<< this->hitPoint << " ; attakdamage : " << this->attackDamage << std::endl;
	}
	else
		std::cout << "attack : there is no more energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint >= amount)
	{
		std::cout << "ClapTrap take damage ( " << amount << " points )" <<std::endl;
		this->hitPoint -= amount;
		std::cout << "energyPoint : " << this->energyPoint << " ; hitPoint : " \
		<< this->hitPoint << " ; attakdamage : " << this->attackDamage << std::endl;
	}
	else
		std::cout << "take damage : there is no more hitPoints" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint >= amount)
	{
		std::cout << "ClapTrap " << this->name << " repaire itself ( " \
		<< amount << " points )"<< std::endl;
		this->hitPoint += amount;
		this->energyPoint -= amount;
		std::cout << "energyPoint : " << this->energyPoint << " ; hitPoint : " \
		<< this->hitPoint << " ; attakdamage : " << this->attackDamage << std::endl;
	}
	else
		std::cout << "be repaired : there is no more energy points" << std::endl;
}

void		ClapTrap::setName(std::string name)
{
	this->name = name;
}
