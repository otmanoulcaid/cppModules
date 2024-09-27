/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:21:41 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/25 08:32:05 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALAR_CONVERTER_HPP__

# define __SCALAR_CONVERTER_HPP__
# include <iostream>
# include <sstream>
# include <iomanip>
# include <cfloat>
# include "DataTypeEnum.hpp"
class ScalarConverter
{
	private :
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& scalar);
		~ScalarConverter(void);
		ScalarConverter& operator=(const ScalarConverter& scalar);

	public:
		static void convert(char *strFormat);
		static void printDouble(DataType dt, char *strFormat);
		static void printFloat(DataType dt, char * strFormat);
		static void printInt(DataType dt, char * strFormat);
		static void printChar(DataType dt, char *strFormat);
		static DataType whichType(std::string strFormat);
		static int validNumber(std::string strFormat);
};

#endif