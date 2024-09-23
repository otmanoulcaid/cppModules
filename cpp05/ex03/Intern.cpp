/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:20:47 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 14:57:13 by ooulcaid         ###   ########.fr       */
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


AForm *Intern::newFormR(std::string name)
{
	return new RobotomyRequestForm(name);
}

AForm *Intern::newFormS(std::string name)
{
	return new ShrubberyCreationForm(name);
}

AForm *Intern::newFormP(std::string name)
{
	return new PresidentialPardonForm(name);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	int	i = -1;
	AForm *(Intern::*f[3])(std::string target) = {&Intern::newFormR, &Intern::newFormS, &Intern::newFormP};
	std::string forms[] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};
	while (++i < 3 && name.compare(forms[i]))
		;
	if (i < 3)
		return (this->*f[i])(target);
	std::cout << "the form " << name << " does not exist" << std::endl;
	return (NULL);
}
