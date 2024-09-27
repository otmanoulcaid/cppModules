/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:26:01 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/27 12:24:53 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"


Span::Span(void)
{
	// std::cout << "Span defualt constructor is called" << std::endl;
}

Span::Span(unsigned int nbr) : nbrElements(nbr), sorted(0)
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
		this->sorted = span.sorted;
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
	if (this->vect.size() <= 1)
		throw std::runtime_error("the distance can't be calculated");
	if (!this->sorted)
		std::sort(this->vect.begin(), this->vect.end()), this->sorted = 1;
	return (std::abs(this->vect.back() - this->vect.front()));
}

unsigned int Span::shortestSpan(void)
{
	if (this->vect.size() <= 1)
		throw std::runtime_error("the distance can't be calculated");
	if (!this->sorted)
		std::sort(this->vect.begin(), this->vect.end());
	std::vector<int>::iterator it = this->vect.begin();
	unsigned int shortest = std::abs(*(it++) - *it);
	unsigned int tmp;
	while (it + 1 != this->vect.end())
	{
		tmp = std::abs(*(it++) - *it);
		if (shortest > tmp)
			shortest = tmp;
	}
	return (this->sorted = 1, shortest);
}

iterator	Span::begin(void)
{
	return this->vect.begin();
}

iterator	Span::end(void)
{
	return this->vect.end();
}

void	Span::addNumber(int	number)
{
	if (this->vect.size() >= static_cast<size_t>(this->nbrElements))
		throw std::runtime_error("the container is full!! there is no more space");
	this->vect.push_back(number);
}
