/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:35:16 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 17:53:20 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("test");
	std::cout << "-------------------------------------" << std::endl;
	diamond.attack("himseflf");
	std::cout << "-------------------------------------" << std::endl;
	diamond.beRepaired(9);
	std::cout << "-------------------------------------" << std::endl;
	diamond.takeDamage(10);
	std::cout << "-------------------------------------" << std::endl;
	diamond.beRepaired(9);
	std::cout << "-------------------------------------" << std::endl;
	diamond.highFivesGuys();
	std::cout << "-------------------------------------" << std::endl;
	diamond.attack("mustafa");
	std::cout << "-------------------------------------" << std::endl;
	diamond.WhoAmI();
	std::cout << "-------------------------------------" << std::endl;
}