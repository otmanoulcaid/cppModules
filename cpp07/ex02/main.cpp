/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:15:59 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/26 09:56:30 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
	const Array <int> arr;
	const Array <int> arr1(10);

	try
	{
		for (size_t i = 0, j = 0; i < arr1.size(); i++, j+=2)
			arr1[i] = j;
		Array <int> arr2(arr1);
		for (size_t i = 0; i < arr2.size(); i++)
			std::cout << "arr2["<< i << "] = " << arr2[i] << std::endl;
		std::cout << arr1[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
