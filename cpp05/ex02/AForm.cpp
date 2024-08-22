/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:24:15 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/10 21:39:06 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec) : 
name(name), 
gradeSign(gradeSign), 
gradeExec(gradeExec)
{
	// std::cout << "default consructor is called" << std::endl;
	if (this->gradeSign < 1)
		throw AForm::GradeTooHighException("Oops!! grade too High");
	if (this->gradeSign > 150)
		throw AForm::GradeTooLowException("Oops!! grade too low");
	this->isSigned = false;
}

AForm::AForm(void) : gradeSign(0), gradeExec(0)
{
	// std::cout << "default consructor is called" << std::endl;
}

AForm::~AForm(void)
{
	// std::cout << "AForm desructor is called" << std::endl;
}

AForm::AForm(const AForm& form) : 
name(form.name), 
gradeSign(form.gradeSign),
gradeExec(form.gradeExec)
{
	// std::cout << "Form desructor is called" << std::endl;
	this->isSigned = form.getIsSigned();
}

AForm&	AForm::operator=(const AForm& form)
{
	// std::cout << "Copy assignement operator is called" << std::endl;
	if (this != &form)
		this->isSigned = form.getIsSigned();
	return (*this);
}

std::string	AForm::getName(void) const
{
	return this->name;
}

int	AForm::getGradeSign(void) const
{
	return this->gradeSign;
}

int	AForm::getGradeExec(void) const
{
	return this->gradeExec;
}

bool	AForm::getIsSigned(void) const
{
	return this->isSigned;
}

void	AForm::setIsSigned(bool state)
{
	this->isSigned = state;
}

void	AForm::beSigned(const Bureaucrat& bureau)
{
	if (this->getGradeSign() < bureau.getGrade())
		throw (AForm::GradeTooLowException("grade is too low"));
	this->isSigned = true;
}

AForm::GradeTooHighException::GradeTooHighException(const char *errMsg) throw() : errMsg(errMsg) 
{
	// std::cout << "GradeTooHighException constructor is called" << std::endl;
}

AForm::GradeTooLowException::GradeTooLowException(const char *errMsg) throw() : errMsg(errMsg)
{
	// std::cout << "GradeTooLowException constructor is called" << std::endl;
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return errMsg;
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return errMsg;
}

std::ostream&	operator<<(std::ostream &out, const AForm& form)
{
	out << "form : " << form.getName() << " , grade : " << form.getGradeSign() << " gradeExec " \
	<< form.getGradeExec() << " isSigned : " << form.getIsSigned() << std::endl;
	return out;
}