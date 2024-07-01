#include "Point.hpp"

Point::Point()
{
    std::cout << "default constructor id called" << std::endl;
}

Point::Point(Fixed const x, Fixed const y) : x(x), y(y)
{}

Point::~Point()
{
    std::cout << "the destructor id called" << std::endl;
}

Point::Point(const Point & point) : x(point.x), y(point.y)
{
    *this = point;
}

Point& Point::operator=(const Point & point)
{
    return (*this);
}