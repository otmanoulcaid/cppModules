// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:55:37 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/11 12:34:00 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
ShrubberyCreationForm::ShrubberyCreationForm(void) : gradeExec(137), gradeSign(145)
{
	// std::cout << "default constructor is called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// std::cout << "destructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : target(target), gradeExec(137), gradeSign(145)
{
	// std::cout << "param constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & PPForm)
{
	// std::cout << "copy constructor is called" << std::endl;
	*this = PPForm;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & PPForm)
{
	// std::cout << "copy constructor is called" << std::endl;
	if (this != &PPForm)
		this->setIsSigned(PPForm.getIsSigned());
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->gradeExec)
		throw (AForm::GradeTooLowException("Oops !! grade too low "));
	if (!this->getIsSigned())
		throw std::runtime_error("the form " + this->target + " not signed yet");
	std::ofstream   outFile;
	std::string file = this->target;
	outFile.open(file.append("_shrubbery"));
	outFile << "                 O                   " << std::endl;
	outFile << "              _/|||\\_               " << std::endl;
	outFile << "            _/ /||| *\\_O            " << std::endl;
	outFile << "       ____/ */ |||\\*  \\___        " << std::endl;
	outFile << "      /______/  ||| \\   *   \\      " << std::endl;
	outFile << "                |||  \\*    o \\     " << std::endl;
	outFile << "       ________/|||\\  \\______|     " << std::endl;
	outFile << "      |_______/ |||*\\               " << std::endl;
	outFile << "                |||__\\              " << std::endl;
	outFile << "                |||                  " << std::endl;
	outFile << "                |||                  " << std::endl;
	outFile << "               /|||\\                " << std::endl;
	outFile << "==============/=====\\===============" << std::endl;
	outFile.close();
}

std::string	ShrubberyCreationForm::getTarget(void)
{
	return (this->target);
}

void	ShrubberyCreationForm::beSigned(const Bureaucrat& bureau)
{
	if (bureau.getGrade() > this->gradeSign)
		throw (AForm::GradeTooLowException("grade is too low"));
	this->setIsSigned(true);
}