/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:28:16 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/25 08:40:30 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{}

ScalarConverter::~ScalarConverter(void)
{}

ScalarConverter::ScalarConverter(const ScalarConverter& scalarConverter)
{
	(void)scalarConverter;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& scalarConverter)
{
	(void)scalarConverter;
	return *this;
}

int	ScalarConverter::validNumber(std::string strFormat)
{
	int f = 0, d = 0;
	size_t j = (strFormat[0] == '+' || strFormat[0] == '-') ? 0 : -1;
	while (++j < strFormat.length())
	{
		if (strFormat[j] == 'f')
			f++;
		else if (strFormat[j] == '.')
			d++;
		else if (strFormat[j] <= '9' && strFormat[j] >= '0')
			continue;
		else
			return (false);
	}
	return (d < 2 && f < 2);
}

DataType	ScalarConverter::whichType(std::string strFormat)
{
	if (strFormat.length() == 1 && (strFormat[0] < '0' || strFormat[0] > '9'))
		return (eChar);
	if (!strFormat.compare("nan") || !strFormat.compare("nanf"))
		return (eNan);
	if (!strFormat.compare("+inff") || !strFormat.compare("-inff") \
		|| !strFormat.compare("+inf") || !strFormat.compare("-inf"))
		return (eInf);
	if (!validNumber(strFormat))
		return (eError);
	if (strFormat[strFormat.length() - 1] == 'f')
		return (eFloat);
	if (strFormat.find(".") != std::string::npos)
		return (eDouble);
	return (eInt);
}

void	ScalarConverter::printChar(DataType dt, char *strFormat)
{
	long	nbr = std::strtol(strFormat, &strFormat, 10);
	if (dt == eChar)
		std::cout << strFormat << std::endl;
	else if (dt == eNan || dt == eInf || nbr > 127 || nbr < 0)
		std::cout << "impossible" << std::endl;
	else if (nbr < 32 || nbr == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << static_cast<char>(nbr) << '\'' << std::endl;
}

void	ScalarConverter::printInt(DataType dt, char * strFormat)
{
	long	nbr ;
	if (dt == eChar)
		nbr = static_cast<long>(strFormat[0]);
	else
		nbr = std::strtol(strFormat, NULL, 10);
	if (dt == eNan || eInf == dt || nbr > INT_MAX || nbr < INT_MIN)
		std::cout << "impossible" << std::endl;
	else if (dt == eInt || dt == eDouble || dt == eFloat || dt == eChar)
		std::cout << nbr << std::endl;
}

void	ScalarConverter::printFloat(DataType dt, char * strFormat)
{
	double d;
	if (dt == eChar)
		d = static_cast<double>(strFormat[0]);
	else
		d = std::strtod(strFormat, NULL);
	if (dt ==eInf || d > FLT_MAX || d < -FLT_MAX)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	else if (dt == eDouble || dt == eFloat || dt == eInt || dt == eChar)
		std::cout << d;
	else if (dt == eNan)
		std::cout << "nan";
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	ScalarConverter::printDouble(DataType dt, char *strFormat)
{
	double d;
	if (dt == eChar)
        d = static_cast<double>(strFormat[0]);
    else
        d = std::strtod(strFormat, NULL); 
    if (dt == eInf || d > DBL_MAX || d < -DBL_MAX) {
        std::cout << "impossible" << std::endl;
        return;
    }
	else if (dt == eNan)
		std::cout << "nan";
	else if (dt == eDouble || dt == eFloat || dt == eInt || dt == eChar)
		std::cout << d;
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void	ScalarConverter::convert(char *strFormat)
{
	DataType dt = whichType(static_cast<std::string>(strFormat));
	if (dt == eError)
	{
		std::cout << "invalid input" << std::endl;
		return ;	
	}
	std::cout << "char: ", printChar(dt, strFormat);
	std::cout << "int: ", printInt(dt, strFormat);
	std::cout << "float: ", printFloat(dt, strFormat);
	std::cout << "double: ", printDouble(dt, strFormat);
}
