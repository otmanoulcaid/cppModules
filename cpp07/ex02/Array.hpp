/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:31:04 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/26 09:48:24 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__

# define __ARRAY_HPP__
# include <iostream>

template<typename T>
class Array
{
private:
	T				*array;
	unsigned int	n;
public:
	Array(void) : n(0)
	{
		// std::cout << "default constructor\n";
		this->array = new T[0];
	}
	Array(unsigned int n)
	{
		// std::cout << "param constructor\n";
		this->n = n;
		this->array = new T[n];
	}
	~Array()
	{
		// std::cout << "destructor\n";
		if (this->array)
			delete array;
	}
	
	Array& operator=(const Array& array)
	{
		if (this != &array)
		{
			if (this->array)
				delete this->array;
			this->n = array.n;
			this->array = new T[array.size()];
			for (size_t i = 0; i < array.size(); i++)
				this->array[i] = array.array[i];
		}
		return *this;
	}

	Array(const Array& array)
	{
		this->array = NULL;
		*this = array;
	}

	T&	operator[](unsigned int index) const
	{
		if (index >= this->n)
			throw std::out_of_range("Index out of bounds");
		return (this->array[index]);
	}

	unsigned int size(void) const
	{
		return this->n;
	}
};

#endif