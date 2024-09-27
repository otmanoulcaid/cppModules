/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:23:35 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/26 09:53:07 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{ 
	std::cout << ">>>>>>>> managing integer <<<<<<<<" << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "before swap : a = " << a << ", b = " << b << std::endl;
	swap( a, b );
	std::cout << "after swap : a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << ">>>>>>>> managing string <<<<<<<<" << std::endl;;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "before swap : c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "after swap : c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
