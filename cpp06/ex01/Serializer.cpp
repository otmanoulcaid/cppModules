/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:30:43 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/15 11:26:40 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer(void)
{
	// std::cout << "Serializer defualt constructor is called" << std::endl;
}

Serializer::~Serializer(void)
{
	// std::cout << "Serializer destructor is called" << std::endl;
}

Serializer::Serializer(const Serializer& serializer)
{
	// std::cout << "Serializer copy constructor is called" << std::endl;
	*this = serializer;
}

Serializer&		Serializer::operator=(const Serializer& serializer)
{
	// std::cout << "scalarConverter copy assignement is called" << std::endl;
	(void)serializer;
	return *this;
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data *dataPtr = reinterpret_cast<Data *>(raw);
	return (dataPtr);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t uPtr = reinterpret_cast<uintptr_t >(ptr);
	return (uPtr);
}
