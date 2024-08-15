/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:43:22 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/15 12:39:16 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(void){}
Base::~Base(void){}

Base *Base::generate(void)
{
	int		randomValue;
	Base	*base;

	srand(time(NULL));
	randomValue = rand()%3;
	switch (randomValue)
	{
	case 0:
		base = new A();
		break;
	case 1:
		base = new B();
		break;
	case 2:
		base = new C();
	}
	return base;
}

void	Base::identify(Base *base)
{
	if (!base)		
		std::cout << "you are passing NULL pointer" << std::endl;
	else if (dynamic_cast<A *>(base))
		std::cout << "the object is of type A" << std::endl;
	else if (dynamic_cast<B *>(base))
		std::cout << "the object is of type B" << std::endl;
	else if (dynamic_cast<C *>(base))
		std::cout << "the object is of type C" << std::endl;
}

void	Base::identify(Base& base)
{
	try
	{
		A& a = dynamic_cast<A &>(base);
		(void) a;
		std::cout << "the object is of type A" << std::endl;
	}
	catch(...){}
	try
	{
		B& b = dynamic_cast<B &>(base);
		(void) b;
		std::cout << "the object is of type B" << std::endl;
	}
	catch(...){}
	try
	{
		C& c = dynamic_cast<C &>(base);
		(void) c;
		std::cout << "the object is of type C" << std::endl;
	}
	catch(...){}
}