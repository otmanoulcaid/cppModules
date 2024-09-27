/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:23:35 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/26 09:51:32 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void pair(const T& t)
{
	std::cout << "(" << t << "," << t << ")" << std::endl;
}

int main( void )
{ 
	char s[] = "hello world";
	iter(s, 11, &pair<char>);
	std::cout << "\n--------------------------------\n";
	int nbr[] = {1, 2, 3, 4, 5};
	iter(nbr, 5, &pair<int>);
}
