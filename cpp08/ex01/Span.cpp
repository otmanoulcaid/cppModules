/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:26:01 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/15 18:27:07 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"


Span::Span(void)
{
	// std::cout << "Span defualt constructor is called" << std::endl;
}

Span::Span(unsigned int nbr) : nbrElements(nbr), shortest(0), longest(0) 
{
	// std::cout << "Span defualt constructor is called" << std::endl;
}

Span::~Span(void)
{
	// std::cout << "Span destructor is called" << std::endl;
}

Span::Span(const Span& span)
{
	// std::cout << "Span copy constructor is called" << std::endl;
	*this = span;
}

Span&		Span::operator=(const Span& span)
{
	// std::cout << "scalarConverter copy assignement is called" << std::endl;
	if (this != &span)
	{
		this->shortest = span.shortest;
		this->longest = span.longest;
		this->nbrElements = span.nbrElements;
		this->vect.clear();
		for (size_t i = 0; i < span.vect.size(); i++)
			this->vect.push_back(span.vect.at(i));
	}
	return *this;
}

	/*-----------------member functions----------------*/
unsigned int Span::longestSpan(void)
{
	if (!this->vect.size() || this->vect.size() == 1)
		throw std::runtime_error("the distance can't be calculated");
	return (this->longest);
}

unsigned int Span::shortestSpan(void)
{
	if (!this->vect.size() || this->vect.size() == 1)
		throw std::runtime_error("the distance can't be calculated");
	return (this->shortest);
}

void	Span::addNumber(int	number)
{
	if (this->vect.size() >= static_cast<size_t>(this->nbrElements))
		throw std::runtime_error("the container is full!! there is no more space");
	if (this->vect.size() == 1)
	{
		this->shortest = static_cast<long>(std::abs(number - this->vect.back()));
		this->longest = this->shortest;
	}
	else if (this->vect.size() >= 2)
	{
		if (static_cast<long>(std::abs(number - this->vect.back())) < this->shortest)
			this->shortest = std::abs(number - this->vect.back());
		if (static_cast<long>(std::abs(number - this->vect.back())) > this->longest)
			this->longest = std::abs(number - this->vect.back());
	}
	this->vect.push_back(number);
}
