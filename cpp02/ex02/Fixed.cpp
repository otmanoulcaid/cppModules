#include "Fixed.hpp"

const int	Fixed::__fract = 8;

/*-------------------- Constructors -------------------*/
Fixed::Fixed()
{
	this->value = 0;
	// std::cout << "the default constructor is called" << std::endl;
}

Fixed::Fixed(const int number)
{
	this->value = number << 8;
}

Fixed::Fixed(const float number)
{
	this->value = roundf((1 << Fixed::__fract) * number);
}

Fixed::~Fixed(void)
{
	// std::cout << "the destructor is called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) : value(fixed.value)
{
	*this = fixed;
	// std::cout << "the copy constructor is called" << std::endl;	
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
	const Fixed tmp(this->toFloat() + fixed.toFloat());
	return tmp;
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
	const Fixed tmp(this->toFloat() - fixed.toFloat());
	return tmp;
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
	const Fixed tmp(this->toFloat() * fixed.toFloat());
	return tmp;
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
	const Fixed tmp(this->toFloat() / fixed.toFloat());
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
    ++this->value;
    return (*this);         
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->value++;
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

int	Fixed::toInt(void) const
{
	return (this->value / (float(1 << Fixed::__fract)));
}

float	Fixed::toFloat(void) const
{
	return (this->value / (float(1 << Fixed::__fract)));
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

/*-----------------external functions--------------*/
std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
