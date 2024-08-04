#include "Point.hpp"

int main( void )
{
    const Fixed a;
    const Fixed b( Fixed( 5.0f ));
    const Fixed c( Fixed( 1.0f ));
    Point p(c, c);
    Point p1(a, b);
    Point p2(b, a);
    Point p3(a, a);
    std::cout << "the Fixed p.x " << p.x  << " && p.y " << p.y << std::endl;
    std::cout << "the Fixed p1.x " << p1.x << " && p1.y " << p1.y << std::endl;
    std::cout << "the Fixed p2.x " << p2.x << " && p2.y " << p2.y << std::endl;
    std::cout << "the Fixed p3.x " << p3.x << " && p3.y " << p3.y << std::endl;
    std::cout << ">>>>>>>> " << (bsp(p3, p2, p1, p1) ? "inside" : "outside") << " <<<<<<<<" << std::endl;
    return 0;
}
