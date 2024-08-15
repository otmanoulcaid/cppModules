/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:18:35 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/15 18:24:20 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__

# define __SPAN_HPP__
# include <algorithm>
# include <iostream>
# include <vector>

class Span
{
	private:
		long			nbrElements;
		long			shortest;
		unsigned int	longest;
		std::vector<int>vect;
	public:
	/*-----------------constructors----------------*/
		Span(unsigned int nbrElement);
		Span(void);
		~Span(void);
		Span(const Span& span);
		Span& operator=(const Span& span);

	/*-----------------member functions----------------*/
		unsigned int	longestSpan(void);
		unsigned int	shortestSpan(void);
		void			addNumber(int	number);
		
};

#endif