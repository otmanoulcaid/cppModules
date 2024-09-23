/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:28:16 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/23 16:46:31 by ooulcaid         ###   ########.fr       */
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

static int onlyNumbers(std::string strFormat)
{
	size_t i = (strFormat[0] == '+' || strFormat[0] == '-') ? 0 : -1;
	while (++i < strFormat.length())
		if (strFormat[i] > '9' || strFormat[i] < '0')
			return (false);
	return (true);
}

static int validFormat(std::string strFormat)
{
	int n = 0, f = 0, i = 0, a = 0, d = 0;
	size_t j = (strFormat[0] == '+' || strFormat[0] == '-') ? 0 : -1;
	while (++j < strFormat.length())
	{
		if (strFormat[j] == 'n')
			n++;
		else if (strFormat[j] == 'f')
			f++;
		else if (strFormat[j] == 'i')
			i++;
		else if (strFormat[j] == 'a')
			a++;
		else if (strFormat[j] == '.')
			d++;
		else if (strFormat[j] <= '9' && strFormat[j] >= '0')
			continue;
		else
			return (false);
	}
	return ((d < 2 && !a && !n && !i) || \
			((a == 1 && n == 2 && !f && !i && !d) || \
			(i == 1 && n == 1 && f == 1 && !a && !d)));
}

static dataType whichType(std::string strFormat)
{
	if (strFormat.length() == 1 && (strFormat[0] < '0' || strFormat[0] > '9'))
		return (eChar);
	if (!validFormat(strFormat))
		return (eError);
	if (!strFormat.compare("nan"))
		return (eNan);
	if (!strFormat.compare("nanf"))
		return (eNanf);
	if (!strFormat.compare("inf") || !strFormat.compare("-inf") || !strFormat.compare("+inf"))
		return (eInf);
	if (strFormat[strFormat.length() - 1] == 'f')
		return (eFloat);
	if (strFormat.find(".") != std::string::npos)
		return (eDouble);
	if (onlyNumbers(strFormat))
		return (eInt);
	return (eError);
}

static void printChar(dataType dt, char *strFormat)
{
	long long	nbr = std::strtoll(strFormat, &strFormat, 10);
	if (dt == eChar)
		std::cout << strFormat << std::endl;
	else if (dt == eNan || dt == eNanf || dt == eInf || nbr > 127 || nbr < 0)
		std::cout << "impossible" << std::endl;
	else if (nbr < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << static_cast<char>(nbr) << '\'' << std::endl;
}

static void printInt(dataType dt, char * strFormat)
{
	long long	nbr ;
	if (dt == eChar)
		nbr = static_cast<long long>(strFormat[0]);
	else
		nbr = std::strtoll(strFormat, NULL, 10);
	if (dt == eNan || eInf == dt || nbr > INT_MAX || nbr < INT_MIN)
		std::cout << "impossible" << std::endl;
	else if (dt == eInt || dt == eDouble || dt == eFloat || dt == eChar)
		std::cout << nbr << std::endl;
}

static void printFloat(dataType dt, char * strFormat)
{
	double d;
	if (dt == eChar)
		d = static_cast<float>(strFormat[0]);
	else
		d = std::strtof(strFormat, NULL);
	if (dt ==eInf || d >= FLT_MAX || d <= -FLT_MAX)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	else if (dt == eDouble || dt == eFloat || dt == eInt || dt == eChar)
		std::cout << d;
	else if (dt == eNan || dt == eNanf)
		std::cout << "nan";
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

static void printDouble(dataType dt, char *strFormat)
{
	long double d;
	if (dt == eChar)
        d = static_cast<double>(strFormat[0]);
    else
        d = std::strtod(strFormat, NULL); 
    if (dt == eInf || d >= DBL_MAX || d <= -DBL_MAX) {
        std::cout << "impossible" << std::endl;
        return;
    }
	else if (dt == eNan || dt == eNanf)
		std::cout << "nan";
	else if (dt == eDouble || dt == eFloat || dt == eInt || dt == eChar)
		std::cout << d;
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void	ScalarConverter::convert(char *strFormat)
{
	dataType dt = whichType(static_cast<std::string>(strFormat));
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
