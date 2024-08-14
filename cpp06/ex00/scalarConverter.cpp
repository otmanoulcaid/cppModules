/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:28:16 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/14 10:58:59 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConverter.hpp"

scalarConverter::scalarConverter(void)
{
	std::cout << "scalarConverter defualt constructor is called" << std::endl;
}

scalarConverter::~scalarConverter(void)
{
	std::cout << "scalarConverter destructor is called" << std::endl;
}

scalarConverter::scalarConverter(const scalarConverter& scalarConverter)
{
	// std::cout << "scalarConverter copy constructor is called" << std::endl;
	*this = scalarConverter;
}

scalarConverter&		scalarConverter::operator=(const scalarConverter& scalarConverter)
{
	// std::cout << "scalarConverter copy assignement is called" << std::endl;
	(void)scalarConverter;
	return *this;
}

dataType	scalarConverter::convert(std::string strFormat)
{
	if (strFormat[0] > '9' || strFormat[0] < '0')
	{
		// if (!strFormat.compare("nan"))
		// 	return (dNan);
		// if (!strFormat.compare("+inf"))
		// 	return (pInf);
		// if (!strFormat.compare("-inf"))
		// 	return (nInf);
		// if (strFormat.length() == 1 && std::isalpha(strFormat[0]))
		// 	return (dChar);
		// if (strFormat[0] != '+' && strFormat[0] != '-')
		// 	return (dNan);
	}
	if (strFormat.find("f") != std::string::npos)
		return (dFloat);
	if (strFormat.find(".") != std::string::npos)
		return (dDouble);
	return (dInt);
}
