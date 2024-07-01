/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:36:20 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/06/26 19:36:21 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook 	phoneBook;
	std::string choice;
	int			i = 0;

	while (1)
	{
		std::cout << "what operation you want on your book contact : ";
		if (!std::getline(std::cin, choice))
			return (std::cout << std::endl, 1);
		if (!choice.compare("ADD"))
			phoneBook.addContact(i++), system("clear");
		else if (!choice.compare("SEARCH"))
			phoneBook.search();
		else if (!choice.compare("EXIT"))
			exit(0);
		else
			std::cout << "invalid choice." << std::endl;
		choice.clear();
	}
}