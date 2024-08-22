/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:22:07 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 03:36:10 by ooulcaid         ###   ########.fr       */
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
	AForm *form = NULL;
	try
	{
		Bureaucrat bureau("hamada", 1);
		ShrubberyCreationForm shForm("CSF");
		shForm.beSigned(bureau);
		shForm.execute(bureau);
		form = intern.makeForm("fooo", "PresidentialPardonForm");
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		if (form)
			free(form);
	}
	catch(...)
	{
		if (form)
			free(form);
	}
}