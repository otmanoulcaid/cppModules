/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:21:41 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/23 16:22:51 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALAR_CONVERTER_HPP__

# define __SCALAR_CONVERTER_HPP__
# include <iostream>
# include <sstream>
# include <iomanip>
# include <cfloat>

enum dataType
{
	eChar,
	eInt,
	eFloat,
	eDouble,
	eInf,
	eNan,
	eNanf,
	eError
};

class ScalarConverter
{
	private :
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& scalar);
		~ScalarConverter(void);
		ScalarConverter& operator=(const ScalarConverter& scalar);

	public:
		static void convert(char *strFormat);
};

#endif