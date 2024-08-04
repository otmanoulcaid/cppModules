#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    std::cout << "Point default constructor is called" << std::endl;
}

Point::Point(Fixed const x, Fixed const y) : x(x), y(y)
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