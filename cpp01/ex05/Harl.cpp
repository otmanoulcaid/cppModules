/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:09:35 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/01 12:42:43 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{    
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\
I really do" << std::endl; 
}
void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; 
}
void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month." << std::endl; 
}
void    Harl::error(void)
{
    std::cout << "This is unaCPPeptable! I want to speak to the manager now." << std::endl; 
}

Harl::Harl()
{
	std::cout << "Harl default constructor is called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructor is called" << std::endl;
}

void    Harl::complain(std::string level)
{
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string a[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;
    while(++i < 4 && a[i].compare(level))
        ;
    if (i == 4)
    {
        std::cout << "the level " << level << " does not exist" << std::endl; 
        return ;
    }
    (this->*f[i])();
}