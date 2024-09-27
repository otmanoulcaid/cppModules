/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:07:02 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/05 16:23:39 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    std::cout << "Point default constructor is called" << std::endl;
}

Point::Point(float const a, float const b) : x(a), y(b)
{
	std::cout << "Point constructor is called" << std::endl;
}

Point::~Point()
{
    std::cout << "Point destructor is called" << std::endl;
}

Point::Point(const Point & point) : x(point.x), y(point.y)
{
    std::cout << "Point copy constructor is called" << std::endl;
}

Point& Point::operator=(const Point& point)
{
    std::cout << "Point copy assignement operator is called" << std::endl;
	(void)point;
	return (*this);
}