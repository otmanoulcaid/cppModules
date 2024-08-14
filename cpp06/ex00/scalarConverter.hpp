/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:21:41 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/12 10:21:20 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALAR_CONVERTER_HPP__

# define __SCALAR_CONVERTER_HPP__
# include <iostream>
# include <sstream>


enum dataType
{
	dChar,
	dInt,
	dFloat,
	dDouble,
	pInf,
	nInf,
	dNan
};

class scalarConverter
{
	private :
		scalarConverter(void);
		scalarConverter(const scalarConverter& scalar);
		~scalarConverter(void);
		scalarConverter& operator=(const scalarConverter& scalar);

	public:
		static dataType convert(std::string str);
};

#endif