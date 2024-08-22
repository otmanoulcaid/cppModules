/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:46:01 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 02:52:08 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureau0("hamada", 1);
		std::cout << bureau0 << std::endl;
		bureau0.incremet();
		// Bureaucrat bureau1("hamada", -1);
		// Bureaucrat bureau2("hamada", 150);
		// bureau2.decremet();
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(...)
	{
		std::cerr << " ==== !!! === "<< std::endl;
	}
}