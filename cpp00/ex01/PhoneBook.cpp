/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:35:58 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/07/30 10:10:44 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::instance = 0;

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook default constructor is called" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook destructor is called" << std::endl;
}

void	PhoneBook::append(Contact contact, int position)
{
    this->contact[position % 8] = contact;
}

void    PhoneBook::addContact(int index)
{
	PhoneBook::instance++;
    return (this->contact[index % 8].newContact());
}

void    PhoneBook::search(void)
{
    int	index;

    this->displayAll();
    std::cout << "enter the contact index you are looking for : ";
    if (!(std::cin >> index))
    {
        std::cout << "bad usage" << std::endl;
        std::exit(1);
    }
	std::cin.ignore();
    system("clear");
	this->look(index);
}

void    PhoneBook::printStr(std::string str)
{
	if (str.length() < 10)
		std::cout << std::setw(10) << str;
	else
	{
		for (int j = 0; j < 9; j++)
			std::cout << str[j];	
        std::cout << ".";
	}
}

void    PhoneBook::displayAll(void)
{
    std::cout << " -------------------------------------------" << std::endl;
    std::cout << "|   index  |firstName | lastName | nickName |" << std::endl;
    std::cout << " -------------------------------------------" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << "|";
        printStr(std::to_string(this->contact[i].getIndex()));
        std::cout << "|";
        this->printStr(this->contact[i].getFName());
        std::cout << "|";
        this->printStr(this->contact[i].getLName());
        std::cout << "|";
        this->printStr(this->contact[i].getNName());
        std::cout << "|\n";
    std::cout << " -------------------------------------------" << std::endl;
    }
}

void    PhoneBook::look(int index)
{
    if (index < 0 || index > 7)
        std::cout << "index out of range" << std::endl;
	else if(index >= PhoneBook::instance)
		std::cout << "there is no contact correspond to the given index" << std::endl;
    else
        this->contact[index].displayInfo();
}
