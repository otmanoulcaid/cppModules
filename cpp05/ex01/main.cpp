/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:03:27 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 02:59:54 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Form form("chahada d skna", 15, 3);
		Bureaucrat bureau("hamada", 10);
		std::cout << bureau << std::endl;
		bureau.signForm(form);
		bureau.incremet();
		std::cout << bureau.getName() << " has level up to " << bureau.getGrade() <<std::endl;
		bureau.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "unexpected error" << std::endl;
	}
}
