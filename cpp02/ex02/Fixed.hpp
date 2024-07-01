#ifndef __FIXED_HPP__

# define __FIXED_HPP__
# include <iostream> 

class Fixed
{
	private:
		int					value;
		static const int	__fract;

	public:
		/*---------------Constructors-------------*/
		Fixed();
		~Fixed();
		Fixed(const int number);
		Fixed(const Fixed& fixed);
		Fixed(const float number);

		/*---------------operators Overloading-------------*/
    	Fixed&	operator=(const Fixed& other);
		Fixed	operator+(const Fixed& fixed) const;
		Fixed	operator-(const Fixed& fixed) const;
		Fixed	operator*(const Fixed& fixed) const;
		Fixed	operator/(const Fixed& fixed) const;
		Fixed&	operator++(void);
    	Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		bool	operator<(const Fixed& fixed);
		bool	operator>(const Fixed& fixed);
		bool	operator>=(const Fixed& fixed);
		bool	operator<=(const Fixed& fixed);
		bool	operator==(const Fixed& fixed);
		bool	operator!=(const Fixed& fixed);

		/*-------------Member functions-----------*/
		static const	Fixed&	max(const Fixed& a, const Fixed& b);
		int 			getRawBits(void) const;
		void 			setRawBits(const int number);
		int				toInt(void) const;
		float			toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &_fixed_);

#endif

