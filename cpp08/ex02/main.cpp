/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:21:55 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/16 21:12:34 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> m;

	m.push(3);
	m.push(30);
	m.push(13);

	MutantStack<int>::iterator it = m.begin();
	std::cout << *it << std::endl;
}