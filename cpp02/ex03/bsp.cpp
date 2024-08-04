#include "Point.hpp"

Fixed  surface(const Point a1, const Point a2, const Point a3)
{
	Fixed area = a1.x * (a2.y - a3.y) + a2.x * (a3.y - a1.y) + a3.x * (a1.y - a2.y);
	area = area / 2;
	 return (area < 0 ? area * -1 : area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area = surface(a, b, c);
	Fixed area1 = surface(a, b, point);
	Fixed area2 = surface (c, a, point);
	Fixed area3 = surface(b, c, point);
	return (area == area1 + area2 + area3 && area1 != 0 && area2 != 0 && area3 != 0) ;
}