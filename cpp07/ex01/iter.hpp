/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:47:58 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/14 17:14:20 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

# include <iostream>

template<typename T>
void	iter(T *array, size_t size, void (*func )(T))
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

# endif