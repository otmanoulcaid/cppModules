/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:34:37 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/07/29 19:47:13 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	Contact::instance = 0;

Contact::Contact()
{
    std::cout << "the default constructor is called" << std::endl;
	this->index = Contact::instance++ % 8;
}

Contact::~Contact()
{
    std::cout << "the destructor is called" << std::endl;
}

int		Contact::getIndex(void)
{
	return (this->index);
}

std::string	Contact::getFName(void)
{
	return (this->firstName);
}

std::string	Contact::getLName(void)
{
	return (this->lastName);
}

std::string	Contact::getNName(void)
{
	return (this->nickname);
}

void	Contact::newContact(void)
{
	while (this->firstName.empty() && std::cout << "enter the contact first name : ")
		if (!std::getline(std::cin, this->firstName))
			exit(2);
	while (this->lastName.empty() && std::cout << "enter the contact last name : ")
		if (!std::getline(std::cin, this->lastName))
			exit(3);
	while (this->nickname.empty() && std::cout << "enter the contact nick name : ")
		if (!std::getline(std::cin, this->nickname))
			exit(4);
	while (this->phoneNumber.empty() && std::cout << "enter the contact phone number : ")
		if (!std::getline(std::cin, this->phoneNumber))
			exit(5);
	while (this->darkestSecret.empty() && std::cout << "enter the contact darkest secret : ")
		if (!std::getline(std::cin, this->darkestSecret))
			exit(6);
}

void	Contact::displayInfo(void)
{
	std::cout << "first name : " << this->firstName << std::endl;
	std::cout << "last name : " << this->lastName << std::endl;
	std::cout << "Nick name : " << this->nickname << std::endl;
	std::cout << "phone number : " << this->phoneNumber << std::endl;
	std::cout << "darkest secret : " << this->darkestSecret << std::endl;
}
