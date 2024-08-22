/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:20:47 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 03:31:36 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern(void)
{
	// std::cout << "Intern defualt constructor is called" << std::endl;
}

Intern::~Intern(void)
{
	// std::cout << "Intern destructor is called" << std::endl;
}

Intern::Intern(const Intern& intern)
{
	(void)intern;
	// std::cout << "Intern copy constructor is called" << std::endl;
}

Intern&	Intern::operator=(const Intern& intern)
{
	(void)intern;
	// std::cout << "Intern copy assignement operator is called" << std::endl;
	return *this;
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	int	i = -1;
	std::string forms[] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};
	while (++i < 3 && target.compare(forms[i]));
	switch (i)
	{
		case 0 :
			return new RobotomyRequestForm(name);
		case 1 :
			return new ShrubberyCreationForm(name);
		case 2 :
			return new PresidentialPardonForm(name);
		default:
		{
			std::cout << "form target does not exist" << std::endl;
			return NULL;
		}
	}
}