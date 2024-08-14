/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:46:53 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/12 10:56:20 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include "scalarConverter.hpp"
		// double intHandler(void);
		// double charHandler(void);
		// double floatHandler(void);
		// double doubleHandler(void);

Converter::Converter(void)
{
	// std::cout << "Converter defualt constructor is called" << std::endl;
}

Converter::Converter(int data) : data(data)
{
	// std::cout << "param Converter constructor is called" << std::endl;
}

Converter::~Converter(void)
{
	// std::cout << "Converter destructor is called" << std::endl;
}

Converter::Converter(const Converter& Converter)
{
	// std::cout << "Converter copy constructor is called" << std::endl;
	*this = Converter;
}

Converter&		Converter::operator=(const Converter& converter)
{
	// std::cout << "scalarConverter copy assignement is called" << std::endl;
	if (this != &converter)
		this->data = converter.data;
	return *this;
}

void	Converter::charHandler(std::string string)
{
	std::cout << "char: ";
	try
	{
		std::cout << static_cast<char>(string[0]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible";
	}
}
	

void	Converter::intHandler(std::string string)
{
	if (!string.compare("nan"))
		std::cout << "impossible";
	else
		std::cout << "int: " << static_cast<int>(this->data) << std::endl;
}

void	Converter::floatHandler(std::string string)
{
	if (!string.compare("nan"))
		std::cout << "nanf";
	else
	{
		std::cout << "float: " ;
		if (static_cast<float>(this->data) - static_cast<int>(this->data) == 0.0)
			std::cout << this->data  << ".0";
		else
			std::cout<< static_cast<float>(this->data);
		std::cout<< "f" << std::endl;;
	}	
}

void	Converter::doubleHandler(std::string string)
{
	if (!string.compare("nan"))
		std::cout << "nan";
	else
	{
		std::cout << "double: " << this->data + 0.0;
		if (this->data - static_cast<int>(this->data) == 0.0)
			std::cout << this->data  << ".0";
		else
			std::cout<< static_cast<float>(this->data);
	}
	std::cout << "\n";
}
