/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:23:35 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/14 21:09:56 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void upper(char c)
{
	if (c <= 'z' && c >= 'a')
		std::cout << (c-=32);
	else
		std::cout << c;
}

void odds(int nbr)
{
	
	std::cout << (nbr % 2 ? nbr : 0);
}

int main( void )
{ 
	char s[] = "hello world";
	iter(s, 11, &upper);
	std::cout << "\n--------------------------------\n";
	int nbr[] = {1, 2, 3, 4, 5};
	iter(nbr, 5, &odds);
	std::cout << "\n--------------------------------\n";
	
}