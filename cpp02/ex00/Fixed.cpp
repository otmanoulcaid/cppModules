#include "Fixed.hpp"

int	Fixed::__fract = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	Fixed::value = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed& fixed)
{
	std::cout << "Copy constructor  called" << std::endl;
	if (this != &fixed)
		*this = fixed;
}

Fixed&	Fixed::operator=(Fixed& fixed)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &fixed)
		this->value = fixed.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (0);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
