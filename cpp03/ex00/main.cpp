/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:27:13 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 17:28:56 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("omar");
	std::cout << "-------------------------------------" << std::endl;
	clap.attack("mustafa");
	std::cout << "-------------------------------------" << std::endl;
	clap.beRepaired(9);
	std::cout << "-------------------------------------" << std::endl;
	clap.takeDamage(10);
	std::cout << "-------------------------------------" << std::endl;
	clap.beRepaired(9);
	std::cout << "-------------------------------------" << std::endl;
	clap.attack("mustafa");
}
