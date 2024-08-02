/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:37:34 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/01 13:32:23 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie constructor is called" << std::endl;
}

Zombie::Zombie()
{
    std::cout << "default constructor is called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " the destructor has been called" << std::endl;
}

std::string Zombie::getName(void)
{
    return this->name;
}

void    Zombie::announce(void)
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
