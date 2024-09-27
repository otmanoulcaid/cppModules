/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:06:52 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/05 16:20:23 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
    Point p3(5.0f, 0);
    Point p1(0, 5.0f);
    Point p2(0, 0);
    Point p(1.0f, 1.0f);
    std::cout << "the Fixed p.x " << p.x  << " && p.y " << p.y << std::endl;
    std::cout << "the Fixed p1.x " << p1.x << " && p1.y " << p1.y << std::endl;
    std::cout << "the Fixed p2.x " << p2.x << " && p2.y " << p2.y << std::endl;
    std::cout << "the Fixed p3.x " << p3.x << " && p3.y " << p3.y << std::endl;
    std::cout << ">>>>>>>> " << (bsp(p3, p2, p1, p) ? "inside" : "outside") << " <<<<<<<<" << std::endl;
    return 0;
}
