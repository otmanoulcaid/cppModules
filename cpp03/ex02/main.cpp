/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:28:16 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 17:16:08 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
   FragTrap frag("selena");
	std::cout << "-------------------------------------" << std::endl;
	frag.attack("himseflf");
	std::cout << "-------------------------------------" << std::endl;
	frag.beRepaired(9);
	std::cout << "-------------------------------------" << std::endl;
	frag.takeDamage(10);
	std::cout << "-------------------------------------" << std::endl;
	frag.beRepaired(9);
	std::cout << "-------------------------------------" << std::endl;
	frag.highFivesGuys();
	std::cout << "-------------------------------------" << std::endl;
	frag.attack("mustafa");
	std::cout << "-------------------------------------" << std::endl;
}