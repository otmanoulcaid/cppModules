/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:46:54 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/15 12:42:54 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	Base bObj;
	std::cout << ">>>> identify using pointer <<<<" << std::endl;
	Base *basePtr;
	basePtr = bObj.generate();
	bObj.identify(basePtr);
	free(basePtr);
	std::cout << "----------------------" << std::endl;
	std::cout << ">>>> identify using reference <<<<" << std::endl;
	A a;
	bObj.identify(a);
	B b;
	bObj.identify(b);
	C c;
	bObj.identify(c);
}