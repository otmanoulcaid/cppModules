#ifndef __FIXED_HPP__

# define __FIXED_HPP__
# include <iostream> 

class Fixed
{
	private:
		int					value;
		static const int	__fract;

	public:
		Fixed();
		~Fixed();
		Fixed(const int number);
		Fixed(const Fixed& fixed);
		Fixed(const float number);
    	Fixed&	operator=(const Fixed &other);
		int 	getRawBits(const float number) const;
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &_fixed_);

#endif