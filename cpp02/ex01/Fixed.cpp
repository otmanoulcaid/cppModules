/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:06:04 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/05 16:06:05 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::__fract = 8;

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "the default constructor is called" << std::endl;
}

Fixed::Fixed(const int number)
{
	std::cout << "int Fixed constructor is called" << std::endl;
	this->value =  number * (1 << Fixed::__fract);
}
Fixed::Fixed(const float number)
{
	std::cout << "float Fixed constructor is called" << std::endl;
	this->value = roundf(number * (1 << Fixed::__fract));
}

Fixed::~Fixed(void)
{
	std::cout << "the destructor is called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed):value(fixed.value) 
{
	std::cout << "the copy constructor is called" << std::endl;	
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "the copy assignement operator is called" << std::endl;
	if (this != &fixed)
		this->value = fixed.value;
	return *this;
}

int	Fixed::toInt(void) const
{
	return (this->value / (1 << Fixed::__fract));
}

float	Fixed::toFloat(void) const
{
	return (this->value / (float(1 << Fixed::__fract)));
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
