/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:56:20 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/26 00:19:09 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__

# define __PMERGEME_HPP__
# include <deque>
# include <vector>
# include <sstream>
# include <iostream>
# include <algorithm>

typedef std::vector<std::pair<int, int> > vect;
typedef std::deque<std::pair<int, int> > deque;

class PmergeMe
{
	private:
		/* data */
	public:
			/*---------------canonical form---------------*/
		PmergeMe(void);
		~PmergeMe(void);
		PmergeMe(const PmergeMe& pmerge);
		PmergeMe&	operator=(const PmergeMe& pmerge);
		
			/*-------------member functions-------------*/
		void				mergeSort(vect& myPair);
		std::vector<int>	mainPendProcess(vect& myVector);
		int					allNumbers(const std::string& numbers);
		void				merge(vect &leftArr, vect &rightArr, vect &arr);
		void				getNumbers(char **av, vect& myVector, int& remain);
};

#endif