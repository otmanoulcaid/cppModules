/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:44:01 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/27 14:44:02 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
static void itterate(T begin, T end)
{
	while (begin != end)
		std::cout << *(begin++) << "   ";
	std::cout << std::endl;
}

int main(void)
{
	MutantStack<int, std::deque<int> > m;

	m.push(3);
	m.push(30);
	m.push(13);
	m.push(19);
	m.push(20);
	m.push(5);
	m.push(2);
	std::cout << ">>>> itterate from the top <<<<" << std::endl;
	itterate(m.begin(), m.end());
	std::cout << ">>>> itterate from the tail <<<<" << std::endl;
	itterate(m.rbegin(), m.rend());
	std::cout << ">>>> itterate from the top (const)<<<<" << std::endl;
	itterate(m.cbegin(), m.cend());
	std::cout << ">>>> itterate from the tail (const)<<<<" << std::endl;
	itterate(m.crbegin(), m.crend());
}