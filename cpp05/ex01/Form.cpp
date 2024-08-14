/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:24:15 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/10 21:48:54 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(const std::string name, const int gradeSign, const int gradeExec, bool isSigned) : 
name(name), 
gradeSign(gradeSign), 
gradeExec(gradeExec), 
isSigned(isSigned)
{
	std::cout << "default consructor is called" << std::endl;
	if (this->gradeSign < 1)
		throw Form::GradeTooHighException("Oops!! grade too High");
	if (this->gradeSign > 150)
		throw Form::GradeTooLowException("Oops!! grade too low");
}

Form::Form(void) : gradeSign(0), gradeExec(0)
{
	std::cout << "default consructor is called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form desructor is called" << std::endl;
}

Form::Form(const Form& form) : name(form.name), gradeSign(form.gradeSign), gradeExec(form.gradeExec)
{
	std::cout << "Form desructor is called" << std::endl;
	this->isSigned = form.getIsSigned();
}

Form&	Form::operator=(const Form& form)
{
	std::cout << "Copy assignement operator is called" << std::endl;
	if (this != &form)
		this->isSigned = form.getIsSigned();
	return (*this);
}

std::string	Form::getName(void) const
{
	return this->name;
}

int	Form::getGradeSign(void) const
{
	return this->gradeSign;
}

int	Form::getGradeExec(void) const
{
	return this->gradeExec;
}

bool	Form::getIsSigned(void) const
{
	return this->isSigned;
}

void	Form::beSigned(const Bureaucrat& bureau)
{
	if (this->getGradeSign() < bureau.getGrade())
		throw (Form::GradeTooLowException("grade is too low"));
	this->isSigned = true;
}

Form::GradeTooHighException::GradeTooHighException(const char *errMsg) throw() : errMsg(errMsg) 
{
	// std::cout << "GradeTooHighException constructor is called" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(const char *errMsg) throw() : errMsg(errMsg)
{
	// std::cout << "GradeTooLowException constructor is called" << std::endl;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return errMsg;
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return errMsg;
}

std::ostream&	operator<<(std::ostream &out, const Form& form)
{
	out << "form : " << form.getName() << " , grade : " << form.getGradeSign() << " gradeExec " \
	<< form.getGradeExec() << " isSigned : " << form.getIsSigned() << std::endl;
}