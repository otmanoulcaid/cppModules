/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:56:14 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 12:12:48 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : gradeExec(5), gradeSign(25)
{
	std::cout << "default constructor is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// std::cout << "destructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : target(target), gradeExec(5), gradeSign(25)
{
	// std::cout << "param constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & PPForm)
{
	std::cout << "copy constructor is called" << std::endl;
	*this = PPForm;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & PPForm)
{
	std::cout << "copy constructor is called" << std::endl;
	if (this != &PPForm)
		this->setIsSigned(PPForm.getIsSigned());
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->gradeExec)
		throw (AForm::GradeTooLowException("Oops !! grade too low "));
	if (!this->getIsSigned())
		throw std::runtime_error("the form " + this->target + " not signed yet");
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::beSigned(const Bureaucrat& bureau)
{
	if (bureau.getGrade() > this->gradeSign)
		throw (AForm::GradeTooLowException("grade is too low"));
	this->setIsSigned(true);
}