/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:45:38 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 01:03:20 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat defualt constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat constructor is called" << std::endl;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException("grade is too Low");
	else if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException("grade is too High");
	this->grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : name(bureaucrat.getName())
{
	// std::cout << "Bureaucrat copy constructor is called" << std::endl;
	this->grade = bureaucrat.getGrade();
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	if (this != &bureaucrat)
		this->grade = bureaucrat.getGrade();
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
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
	return this->errMsg;
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return this->errMsg;
}

void	Bureaucrat::incremet(void)
{
	if (this->grade < 2)
		throw Bureaucrat::GradeTooHighException("Ooops! you cant increment the grade ;)");
	this->grade--;
}

void	Bureaucrat::decremet(void)
{
	if (this->grade > 149)
		throw Bureaucrat::GradeTooLowException("Ooops! you cant decrement the grade ;)");
	this->grade++;
}
