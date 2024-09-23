/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:45:38 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 13:18:39 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void)
{
	// std::cout << "Bureaucrat defualt constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	// std::cout << "Bureaucrat constructor is called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException("grade is too Low");
	else if (grade < 1)
	
		throw Bureaucrat::GradeTooHighException("grade is too High");
	this->grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
	// std::cout << "Bureaucrat destructor is called" << std::endl;
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
		this->grade = bureaucrat.grade;
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

void	Bureaucrat::signForm(AForm& form) const
{
	if (!form.getIsSigned())
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->name << " signed the form " << form.getName() << std::endl;
		}
		catch(const AForm::GradeTooLowException& e)
		{
			std::cerr << this->name + " couldnt sign " << form.getName() << " because " << e.what() << std::endl;
		}
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	if (this->grade > form.getGradeSign())
		throw AForm::GradeTooLowException("you are not allowed to sign the form");
	form.execute(*this);
	std::cout << this->name << " execute the form " << form.getName() << std::endl; 
}
