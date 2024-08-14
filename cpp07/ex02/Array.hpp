/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:31:04 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/14 21:11:50 by ooulcaid         ###   ########.fr       */
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
	Array(void)
	{
		std::cout << "default constructor\n";
		this->n = 0;
		this->array = new T[0];
	}
	Array(unsigned int n)
	{
		std::cout << "param constructor\n";
		this->n = n;
		this->array = new T[n];
	}
	~Array()
	{
		std::cout << "destructor\n";
		delete array;
	}
	
	Array& operator=(const Array& array)
	{
		if (this != &array)
		{
			delete this->array;
			this->array = new T[array.n];
			for (int i = 0; i < array.n; i++)
				this->array[i] = array.array[i];
		}
		return *this;
	}

	Array(const Array& array)
	{
		*this = array;
	}

	T&	operator[](unsigned int index)
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