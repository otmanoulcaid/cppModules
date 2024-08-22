/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:27:33 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 17:52:07 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("selena");
	std::cout << "-------------------------------------" << std::endl;
	scav.attack("himseflf");
	std::cout << "-------------------------------------" << std::endl;
	scav.beRepaired(9);
	std::cout << "-------------------------------------" << std::endl;
	scav.takeDamage(10);
	std::cout << "-------------------------------------" << std::endl;
	scav.beRepaired(9);
	std::cout << "-------------------------------------" << std::endl;
	scav.guardGate();
	std::cout << "-------------------------------------" << std::endl;
	scav.attack("mustafa");
	std::cout << "-------------------------------------" << std::endl;
}