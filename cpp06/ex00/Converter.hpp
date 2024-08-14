/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:44:16 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/12 10:31:28 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERTER_HPP__

# define __CONVERTER_HPP__
# include <iostream>
# include <sstream>

class Converter
{
	private :
		int data;
	public:
		Converter(void);
		~Converter(void);
		Converter(int data);
		Converter(const Converter& scalar);
		Converter& operator=(const Converter& scalar);
		void	intHandler(std::string string);
		void	charHandler(std::string string);
		void	floatHandler(std::string string);
		void	doubleHandler(std::string string);
};

#endif