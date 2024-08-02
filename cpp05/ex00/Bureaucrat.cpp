/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:45:38 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/02 17:01:46 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat defualt constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat constructor is called" << std::endl;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException("grade is too high");
	else if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException("grade is too low");
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	// std::cout << "Bureaucrat copy constructor is called" << std::endl;
	*this = bureaucrat;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	if (this != &bureaucrat)
		Bureaucrat(bureaucrat.name, bureaucrat.grade);
	return *this;
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char *errMsg) throw() : errMsg(errMsg) 
{
	// std::cout << "GradeTooHighException constructor is called" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char *errMsg) throw() : errMsg(errMsg)
{
	// std::cout << "GradeTooLowException constructor is called" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return errMsg;
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return errMsg;
}
