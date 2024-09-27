/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:23:20 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/26 08:31:28 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __WHATEVER_HPP__

# define __WHATEVER_HPP__
# include <iostream>

template<typename T>
void	swap(T& a, T& b)
{
	T c;
	
	c = a;
	a = b;
	b = c;
}

template<typename T>
T	max(T& a, T& b)
{
	return (b >= a ? b : a);
}

template<typename T>
T	min(T& a, T& b)
{
	return (b <= a ? b : a);
}

# endif