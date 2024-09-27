/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:07:06 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/05 16:15:35 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__

# define __POINT_HPP__
# include <iostream>
# include "Fixed.hpp"

class Point
{
	public:
		Fixed	const x;
		Fixed	const y;

	public:
		Point();
		Point(float const x, float const y);
		~Point();
		Point(const Point & point);
		Point&	operator=(const Point & point);
};

#endif