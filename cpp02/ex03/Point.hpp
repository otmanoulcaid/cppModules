#ifndef __POINT_HPP__

# define __POINT_HPP__
# include <iostream>
# include "Fixed.hpp"

class Point
{
	public:
		const Fixed	x;
		const Fixed	y;

	public:
		Point();
		Point(Fixed const x, Fixed const y);
		~Point();
		Point(const Point & point);
		Point&	operator=(const Point & point);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif