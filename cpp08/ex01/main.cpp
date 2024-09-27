/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:44:14 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/27 14:09:02 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	add(Span& span, int reps)
{
	std::srand(std::time(NULL));
	for (int i = 0; i < reps; i++)
		span.addNumber(std::rand()%30);
}

int main(void)
{
	Span span(20);
	add(span, 10);
	iterator begin = span.begin();
	iterator end = span.end();
	std::cout << "\n>>>>>>>>>>>>>> the sequence <<<<<<<<<<<<<<\n";
	while (begin != end)
		std::cout << *begin++ << "  ";
	std::cout << "\n\n";
	std::cout << ">>>>>>>>> the shotrest span <<<<<<<<<" << std::endl;
	std::cout << span.shortestSpan() << "\n\n";
	std::cout << ">>>>>>>>> the longuest span <<<<<<<<<" << std::endl;
	std::cout << span.longestSpan() << std::endl;
}
