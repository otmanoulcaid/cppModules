/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:37:13 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/01 13:20:02 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void     	randomChump(std::string name);
Zombie*     newZombie(std::string name);

int main(void)
{
    Zombie *zombie = newZombie("hi");
    zombie->announce();
    randomChump("ih");
	delete zombie;
}