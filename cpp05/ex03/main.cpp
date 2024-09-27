/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:22:07 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 16:07:07 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
	Intern intern;
	try
	{
		Bureaucrat bureau("directeur", 1);
		// Bureaucrat bureau("directeur", 150);
		std::cout << bureau;
		std::cout << "\n----------------------\n";
		AForm *form0 = intern.makeForm("PresidentialPardonForm", "PPF");
		bureau.signForm(*form0);
		std::cout << "\n----------------------\n";
		AForm *form1 = intern.makeForm("RobotomyRequestForm", "RRF");
		bureau.signForm(*form1);
		std::cout << "\n----------------------\n";
		AForm *form2 = intern.makeForm("ShrubberyCreationForm", "SCF");
		bureau.signForm(*form2);
		std::cout << "\n----------------------\n";
		delete(form0);
		delete(form1);
		delete(form2);
		form2 = intern.makeForm("chahada d skna", "cds");
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}