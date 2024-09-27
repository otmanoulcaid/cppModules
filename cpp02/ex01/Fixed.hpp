/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:06:09 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/05 16:06:10 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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