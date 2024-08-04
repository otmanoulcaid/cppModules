#ifndef __FIXED_HPP__

# define __FIXED_HPP__
# include <iostream> 

class Fixed
{
	private:
		int			value;
		static int	__fract;

	public:
		Fixed();
		~Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed& fixed);
    	Fixed&	operator=(const Fixed &other);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &_fixed_);

#endif