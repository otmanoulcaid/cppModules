#include "Point.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.0f ));
    Fixed const c( Fixed( 1.0f ));
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    Point p(c, c);
    Point p1(a, b);
    Point p2(b, a);
    Point p3(a, a);
    std::cout << "-----------------" << bsp(p3, p2, p1, p) << "-----------------" << std::endl;
    std::cout << "the Fixed p.x " << p.x  << " && p.y" << p.y << std::endl;
    std::cout << "the Fixed p.x " << p1.x << " && p.y" << p1.y << std::endl;
    std::cout << "the Fixed p.x " << p2.x << " && p.y" << p2.y << std::endl;
    std::cout << "the Fixed p.x " << p3.x << " && p.y" << p3.y << std::endl;
    return 0;
}
