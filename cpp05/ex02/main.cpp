/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:22:07 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 16:01:50 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureau("hamada", 1); // highest possible grade
	// Bureaucrat bureau("hamada", 150); // lowest possible grade
	try
	{
		PresidentialPardonForm form0("PPF");
		form0.beSigned(bureau);
		form0.execute(bureau);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	try
	{
		RobotomyRequestForm form1("RRF");
		form1.beSigned(bureau);
		form1.execute(bureau);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
		std::cout << "--------------------------------" << std::endl;
	try
	{
		ShrubberyCreationForm form2("SCF");
		form2.beSigned(bureau);
		form2.execute(bureau);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}