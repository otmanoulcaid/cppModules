/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:37:28 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/12 19:22:08 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConverter.hpp"
#include "Converter.hpp"

int main(int ac, char **av)
{
	if (ac > 1)
	{
		std::string strFormat;
		std::stringstream stream(av[ac - 1]);
		stream >> strFormat;
		// std::cout << scalarConverter::convert(strFormat);
		Converter con(scalarConverter::convert(strFormat));
		con.charHandler(strFormat);
		con.intHandler(strFormat);
		con.floatHandler(strFormat);
		con.doubleHandler(strFormat);
	}
}