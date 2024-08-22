/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 09:34:44 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/16 21:11:44 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANSTACK_HPP__

# define __MUTANSTACK_HPP__
# include <iostream>
# include <deque>
# include <stack>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		MutantStack(void){};
		~MutantStack(void){};
		MutantStack(const MutantStack& stack)
		{
			*this = stack;
		};
		MutantStack& operator=(const MutantStack& stack)
		{
			if (this != &stack)
			{
				iterator it = stack.c.begin();
				this->c.clear();
				while (it != stack.c.end())
					this->c.push_back(*it++);
			}
			return (stack);
		};
		iterator begin(void){return this->c.begin();}
		iterator end(void){return this->c.end();}
		iterator rbegin(void){return this->c.rbegin();}
		iterator rend(void){return this->c.rend();}
};

#endif