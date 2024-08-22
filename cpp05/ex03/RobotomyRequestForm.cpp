/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:55:55 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 02:03:25 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	// std::cout << "default constructor is called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// std::cout << "destructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : target(target)
{
	// std::cout << "param constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & PPForm)
{
	// std::cout << "copy constructor is called" << std::endl;
	*this = PPForm;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & PPForm)
{
	// std::cout << "copy constructor is called" << std::endl;
	if (this != &PPForm)
		this->setIsSigned(PPForm.getIsSigned());
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > R_SIGN)
		throw (AForm::GradeTooLowException("Oops !! grade too low "));
	if (!this->getIsSigned())
		throw std::runtime_error("the form " + this->target + " not signed yet");
	std::cout << "yaaaaaa waaaaa yooooo" << std::endl;
}

void	RobotomyRequestForm::beSigned(const Bureaucrat& bureau)
{
	if (bureau.getGrade() > R_SIGN)
		throw (AForm::GradeTooLowException("grade is too low"));
	this->setIsSigned(true);
}