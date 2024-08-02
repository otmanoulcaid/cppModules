/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:10:37 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/01 11:36:43 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):name(name)
{
	this->weapon = NULL;
	std::cout << "HumanB constructor is called" << std::endl;
}

HumanB::HumanB(void)
{
	this->weapon = NULL;
	std::cout << "Human B default constructor is called" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destructor is called" << std::endl;
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attaks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
