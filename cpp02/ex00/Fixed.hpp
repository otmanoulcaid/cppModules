/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:05:50 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/05 16:05:51 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__

# define __FIXED_HPP__
# include <iostream> 

class Fixed
{
    private:
        int         value;
        static int  __fract;

    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed& fixed);
        Fixed&  operator=(Fixed& fixed);
        int     getRawBits( void ) const;
        void	setRawBits(int const raw);
};

#endif