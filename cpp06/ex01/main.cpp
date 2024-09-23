/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:28:31 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/23 18:37:41 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
	Data data = {1000, 65, 'A', true};
	uintptr_t uint = Serializer::serialize(&data);
	std::cout << ">>>> Serialization <<<<" << std::endl;
	std::cout << uint << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << ">>>> deserialization <<<<" << std::endl;
	Data *ptr = Serializer::deserialize(uint);
	if (!ptr)
		return (1);
	std::cout << ptr->longData << std::endl;
	std::cout << ptr->intData << std::endl;
	std::cout << ptr->charData << std::endl;
	std::cout << ptr->boolData << std::endl;
	std::cout << sizeof(data) << std::endl;
}