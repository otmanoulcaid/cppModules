/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 09:34:44 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/27 14:18:32 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANSTACK_HPP__

# define __MUTANSTACK_HPP__
# include <iostream>
# include <deque>
# include <vector>
# include <list>
# include <stack>
# include <algorithm>

template <typename T, typename C>
class MutantStack : public std::stack<T, C>
{
	public:
		typedef typename C::iterator iterator;
		typedef typename C::reverse_iterator riterator;
		typedef typename C::const_iterator citerator;
		typedef typename C::const_reverse_iterator criterator;
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
				this->c.clear();
				iterator it = stack.c.begin();
				while (it != stack.c.end())
					this->c.push_back(*it++);
			}
			return (stack);
		};
		iterator begin(void){return this->c.begin();}
		iterator end(void){return this->c.end();}
		riterator rbegin(void){return this->c.rbegin();}
		riterator rend(void){return this->c.rend();}
		citerator cbegin(void){return this->c.cbegin();}
		citerator cend(void){return this->c.cend();}
		criterator crbegin(void){return this->c.crbegin();}
		criterator crend(void){return this->c.crend();}
};

#endif