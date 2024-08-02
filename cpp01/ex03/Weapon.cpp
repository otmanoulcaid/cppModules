/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:10:12 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/01 11:36:03 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):type(type)
{
	std::cout << "weapon constructor is called" << std::endl;
}

Weapon::Weapon(void)
{
	std::cout << "default constructor is called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "weapon destructor is called" << std::endl;
}

const std::string&	Weapon::getType(void)
{
	return this->type;
}

void		Weapon::setType(std::string type)
{
	this->type = type;
}
