#include "Fixed.hpp"

const int	Fixed::__fract = 8;

Fixed::Fixed()
{
	std::cout << "the default constructor is called" << std::endl;
}

Fixed::Fixed(const int number)
{
	this->value = number << 8;
}
Fixed::Fixed(const float number)
{
	this->value = this->getRawBits(number);
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
	return (this->value / (float(1 << Fixed::__fract)));
}

float	Fixed::toFloat(void) const
{
	return (this->value / (float(1 << Fixed::__fract)));
}

int	Fixed::getRawBits(const float number) const
{
	return (roundf((1 << Fixed::__fract) * number));
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}