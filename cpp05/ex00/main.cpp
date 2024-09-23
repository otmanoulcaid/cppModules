/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:46:01 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 15:40:56 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureau0("jhon", 1);
		std::cout << bureau0 << std::endl;
		bureau0.incremet();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		Bureaucrat bureau1("jhon", -1);
	}
	catch(std::exception &e1)
	{
		std::cerr << e1.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		Bureaucrat bureau2("jhon", 150);
		std::cout << bureau2 << std::endl;
		bureau2.decremet();
	}
	catch(std::exception &e2)
	{
		std::cerr << e2.what() << std::endl;
	}
}