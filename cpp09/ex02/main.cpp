/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:19:11 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/29 15:48:33 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void	print(T& myContainer)
{
	typename T::iterator it = myContainer.begin();
	while (it != myContainer.end())
		std::cout << *it++ << " ";
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac == 1)
		return (1);
	PmergeMe mrg;
	vect myVector;
	deque myDeque;
	(void) ac;
	try
	{
		mrg.fillVector(av + 1, myVector);
		mrg.fillDeque(av + 1, myDeque);
		std::cout << "before: ";
		print(myVector);
		mrg.sort(myVector);
		mrg.sort(myDeque);
		std::cout << "after: ";
		print(myVector);
		std::cout << "Time to process a range of "<< myVector.size()\
			<< "elements with std::vector<int> : " << std::fixed << mrg.getVectorTiming() << std::endl; 
		std::cout << "Time to process a range of "<< myDeque.size() \
			<< "elements with std::deque<int> : "  << std::fixed << mrg.getDequeTiming() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
