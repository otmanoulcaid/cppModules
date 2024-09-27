/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:05:50 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/26 00:35:33 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{}

PmergeMe::~PmergeMe(void)
{}

PmergeMe::PmergeMe(const PmergeMe& merge)
{
	(void)merge;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& merge)
{
	(void)merge;
	return *this;
}

void	PmergeMe::merge(vect &leftArr, vect &rightArr, vect &arr)
{
    size_t i = 0;
    size_t l = 0;
    size_t r = 0;

    while (l < leftArr.size() && r < rightArr.size())
    {
        if (leftArr[l].first < rightArr[r].first)
            arr[i] = leftArr[l++];
        else
            arr[i] = rightArr[r++];
        i++;
    }
    while (l < leftArr.size())
        arr[i++] = leftArr[l++];
    while (r < rightArr.size())
        arr[i++] = rightArr[r++];
}

void	PmergeMe::mergeSort(vect& myPair)
{
    if (myPair.size() <= 1)
        return ;
    size_t middle = myPair.size() / 2;
    vect leftArr;
    vect rightArr;
    for (size_t i = 0; i < myPair.size(); i++)
    {
        if (i < middle)
            leftArr.push_back(myPair[i]);
        else
            rightArr.push_back(myPair[i]);
    }
    mergeSort(leftArr);
    mergeSort(rightArr);
    merge(leftArr, rightArr, myPair);
}

void	PmergeMe::getNumbers(char **av, vect& myVector, int& remain)
{
	std::string numbers = "";
	for (int i = 0; av[i]; i++)
	{
		numbers += av[i];
		numbers += " ";
	}
	if (!allNumbers(numbers))
		throw std::runtime_error("only numeric values required");
	std::stringstream ss(numbers);
	std::string number1, number2;
	while ((ss >> number1))
	{
		if ((ss >> number2))
		{
			if (number2 < number1)
				myVector.push_back(std::make_pair(atoi(number1.c_str()), atoi(number2.c_str())));
			else
				myVector.push_back(std::make_pair(atoi(number2.c_str()), atoi(number1.c_str())));
		}
		else
			remain = atoi(number1.c_str());
	}
}

int		PmergeMe::allNumbers(const std::string& numbers)
{
	for(size_t i = 0; i < numbers.length();i++)
		if (!std::isdigit(numbers[i]) && numbers[i] != ' ')
			return (0);
	return (1);
}

std::vector<int>	PmergeMe::mainPendProcess(vect& myVector)
{
	std::vector<int> main;
	std::vector<int> pend;
	vect::iterator it = myVector.begin();
	main.push_back(it->second), main.push_back(it->first);
	while (++it != myVector.end())
	{
		main.push_back(it->first);
		pend.push_back(it->second);
	}
	std::vector<int>::iterator begin = pend.begin();
	while (pend.end() != begin)
	{
		std::vector<int>::iterator position =  std::lower_bound(main.begin(), main.end(), *begin);
		main.insert(position, *begin);
		begin++;
	}
	return main;
}