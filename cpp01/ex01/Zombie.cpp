/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:37:46 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/01 13:36:45 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie constructor is called" << std::endl;
}

Zombie::Zombie()
{
    std::cout << "Default constructor is called\n";
}

Zombie::~Zombie()
{
    std::cout << this->name << " destructor has been called" << std::endl;
}

std::string Zombie::getName(void)
{
    return this->name;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
