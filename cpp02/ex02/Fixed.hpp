/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:06:28 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/05 16:06:29 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		static 			Fixed&	max(Fixed& a, Fixed& b);
		static 			Fixed&	min(Fixed& a, Fixed& b);
		static const	Fixed&	max(const Fixed& a, const Fixed& b);
		static const	Fixed&	min(const Fixed& a, const Fixed& b);
		int				toInt(void) const;
		float			toFloat(void) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &_fixed_);

#endif
