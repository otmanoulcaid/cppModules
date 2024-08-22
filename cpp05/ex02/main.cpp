/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:22:07 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 03:20:20 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureau("hamada", 1);
		PresidentialPardonForm form0("CSF");
		std::cout << form0;
		form0.beSigned(bureau);
		form0.execute(bureau);
		std::cout << form0;
		std::cout << "--------------------------------" << std::endl;
		RobotomyRequestForm form1("CSF");
		std::cout << form1;
		form1.beSigned(bureau);
		form1.execute(bureau);
		std::cout << form1;
		std::cout << "--------------------------------" << std::endl;
		ShrubberyCreationForm form2("CSF");
		std::cout << form2;
		form2.beSigned(bureau);
		form2.execute(bureau);
		std::cout << form2;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "unexpected error" << std::endl;
	}
}