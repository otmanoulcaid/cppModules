/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:03:27 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 15:54:07 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Form form1("chahada d skna", 15, 3);
		Bureaucrat bureau("directeur", 10);
		Form form2("chahada d l7ayat", 9, 3);
		std::cout << bureau << std::endl;
		bureau.signForm(form1);
		bureau.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
