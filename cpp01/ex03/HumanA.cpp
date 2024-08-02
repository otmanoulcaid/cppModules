/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:14:17 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/01 11:37:25 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):name(name), weapon(weapon)
{
	std::cout << "HumanA constructor is called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destructor is called" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attaks with their " << this->weapon.getType() << std::endl;
}
