/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:19:11 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/26 00:46:32 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	
	(void) ac;
	try
	{
		PmergeMe mrg;
		vect myVector;
		int remain = -1;
		mrg.getNumbers(av + 1, myVector, remain);
		mrg.mergeSort(myVector);
		vect::iterator pairIt = myVector.begin();
		while (pairIt != myVector.end())
		{
			std::cout << "(" << pairIt->first << ", " << pairIt->second << ")" << std::endl ;
			pairIt++;
		}
		std::vector<int> sorted = mrg.mainPendProcess(myVector);
		std::vector<int>::iterator it = sorted.begin();
		// if (remain > 0)
		// {
		// 	std::vector<int>::iterator position =  std::lower_bound(sorted.begin(), sorted.end(), remain);
			// std::cout << *position << std::endl;
			// sorted.insert(position, remain);
		// }
		while (it != sorted.end())
		{
			std::cout << *it << std::endl;
			it++;	
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

