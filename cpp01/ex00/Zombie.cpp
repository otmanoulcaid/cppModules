/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:37:34 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/06/26 22:34:29 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    std::cout << "the default constructor is called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "the destructor has been called" << std::endl;
}

std::string Zombie::getName(void)
{
    return this->name;
}

void    Zombie::announce(void)
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*     newZombie(std::string name)
{
    return new Zombie(name);
}

void     randomChump( std::string name )
{
    Zombie zombie(name);
    zombie.announce();
}
