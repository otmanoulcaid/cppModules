/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:37:28 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/23 21:38:59 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else
		std::cerr << "bad usage: ./convert arg" << std::endl;
	return (0);
}