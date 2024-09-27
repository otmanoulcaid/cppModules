/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:06:44 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/05 16:22:03 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::__fract = 8;

/*-------------------- Constructors -------------------*/
Fixed::Fixed()
{
	this->value = 0;
	std::cout << "the default constructor is called" << std::endl;
}

Fixed::Fixed(const int number)
{
	std::cout << "int Fixed constructor is called" << std::endl;
	this->value = number * (1 << Fixed::__fract);
}

Fixed::Fixed(const float number)
{
	std::cout << "float Fixed constructor is called" << std::endl;
	this->value = roundf((1 << Fixed::__fract) * number);
}

Fixed::~Fixed(void)
{
	std::cout << "the destructor is called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) 
{
	std::cout << "the copy constructor is called" << std::endl;	
	*this = fixed;
}

/*--------------------Operator Overloading-------------------*/
Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "the copy assignement operator is called" << std::endl;
	if (this != &fixed)
		this->value = fixed.value;
	return *this;
}

Fixed	Fixed::operator+(const Fixed& fixed) const
{
	Fixed tmp(this->toFloat() + fixed.toFloat());
	return tmp;
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
	Fixed tmp(this->toFloat() - fixed.toFloat());
	return tmp;
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
	Fixed tmp((this->value * fixed.value) / (1 << Fixed::__fract));
	return tmp;
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
	Fixed tmp((this->value / fixed.value) * (1 << Fixed::__fract));
	return tmp;
}

Fixed& Fixed::operator++(void)
{
	++this->value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->value++;
	return temp;
}

Fixed& Fixed::operator--(void)
{
    --this->value;
    return (*this);         
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->value--;
	return temp;         
}

bool	Fixed::operator<(const Fixed& fixed)
{
	return (this->value < fixed.value);
}

bool	Fixed::operator>(const Fixed& fixed)
{
	return (this->value > fixed.value);
}

bool	Fixed::operator<=(const Fixed& fixed)
{
	return (this->value <= fixed.value);
}

bool	Fixed::operator>=(const Fixed& fixed)
{
	return (this->value >= fixed.value);
}

bool	Fixed::operator==(const Fixed& fixed)
{
	return (this->value == fixed.value);
}

bool	Fixed::operator!=(const Fixed& fixed)
{
	return (this->value != fixed.value);
}

/*--------------------Member functions-------------------*/
const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a.value > b.value ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a.value > b.value ? a : b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a.value < b.value ? a : b);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a.value < b.value ? a : b);
}

float	Fixed::toFloat(void) const
{
	return (this->value / (float(1 << Fixed::__fract)));
}

/*-----------------external functions--------------*/
std::ostream&	operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
