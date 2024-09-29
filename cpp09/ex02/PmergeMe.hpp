/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:56:20 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/29 15:38:24 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__

# define __PMERGEME_HPP__
# include <ctime>
# include <deque>
# include <vector>
# include <sstream>
# include <iomanip>
# include <iostream>
# include <algorithm>
# include <sys/time.h>

typedef std::vector<std::pair<int, int> > vectPair;
typedef std::vector<int> vect;
typedef std::deque<std::pair<int, int> > dequePair;
typedef std::deque<int> deque;

class PmergeMe
{
	private:
		int		remain;
		double	dequeTiming;
		double	vectorTiming;


	public:
			/*---------------canonical form---------------*/
		PmergeMe(void);
		~PmergeMe(void);
		PmergeMe(const PmergeMe& pmerge);
		PmergeMe&	operator=(const PmergeMe& pmerge);
		
			/*-------------member functions-------------*/
		int		allNumbers(const std::string& numbers);
			
					/*---------deque----------*/
		void	sort(deque& myDeque);
		void	mergeSort(dequePair& myPair);
		void	fillDeque(char **av, deque& myDeque);
		void	mainPendInsertion(dequePair& pairs, deque& main, deque& pend);
		void	merge(dequePair &leftArr, dequePair &rightArr, dequePair &arr);
		double	getDequeTiming(void);
		
					/*---------vector---------*/
		void	sort(vect& myVector);
		double	getVectorTiming(void);
		void	mergeSort(vectPair& myPair);
		void	fillVector(char **av, vect& myVector);
		void	mainPendInsertion(vectPair& pairs, vect& main, vect& pend);
		void	merge(vectPair &leftArr, vectPair &rightArr, vectPair &arr);
};

#endif