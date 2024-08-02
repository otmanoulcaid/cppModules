/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:09:05 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/02 08:04:54 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\
    \nI really do\n" << std::endl; 
}
void    Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl; 
}
void    Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for\
years whereas you started working here since last month.\n" << std::endl; 
}
void    Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unaCPPeptable! I want to speak to the manager now.\n" << std::endl; 
}

Harl::Harl()
{
	std::cout << "Harl default constructor is called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl Destructor is called" << std::endl;
}

enum complain	Harl::decrypt(std::string complain)
{
	if (!complain.compare("DEBUG"))
		return eDebug;
	if (!complain.compare("INFO"))
		return eInfo;
	if (!complain.compare("WARNING"))
		return eWarning;
	if (!complain.compare("ERROR"))
		return eError;
	return none;
}

void    Harl::complain(std::string level)
{
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    enum complain i = this->decrypt(level);
	switch (i)
	{
		case (eDebug):
			(this->*f[0])();
		case (eInfo):
			(this->*f[1])();
		case (eWarning):
			(this->*f[2])();
		case (eError):
		{
			(this->*f[3])();
			break;
		}
		default:
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return ;
		}
	}
}