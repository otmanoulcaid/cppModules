/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:05:50 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/29 17:05:35 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
	this->remain = -1;
}

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

int		PmergeMe::allNumbers(const std::string& numbers)
{
	for(size_t i = 0; i < numbers.length();i++)
		if (!std::isdigit(numbers[i]) && numbers[i] != ' ')
			return (0);
	return (1);
}

/*-----------------------vector-----------------------*/

void	PmergeMe::sort(vect& myVector)
{
	clock_t start = clock();
	size_t		i;
	vect		main, pend;
	vectPair	pairs;
	for (i = 0; i + 1 < myVector.size(); i+=2)
		pairs.push_back(std::make_pair(myVector[i], myVector[i + 1]));
	if (i < myVector.size())
		this->remain = myVector[i];
	this->mergeSort(pairs);
	this->mainPendInsertion(pairs, main, pend);
	myVector.clear();
	myVector.assign(main.begin(), main.end());
	if (this->remain >= 0)
	{
		vect::iterator position = std::lower_bound(myVector.begin(), myVector.end(), this->remain);
		myVector.insert(position, this->remain);
	}
	this->remain = -1;
	this->vectorTiming = static_cast<double>(std::clock() - start) / (CLOCKS_PER_SEC);
}

void	PmergeMe::mergeSort(vectPair& myPair)
{
    if (myPair.size() <= 1)
        return ;
    size_t middle = myPair.size() / 2;
    vectPair leftArr;
    vectPair rightArr;
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

void	PmergeMe::merge(vectPair &leftArr, vectPair &rightArr, vectPair &arr)
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

void	PmergeMe::mainPendInsertion(vectPair& pairs, vect& main, vect& pend)
{
	vectPair::iterator it = pairs.begin();
	pend.push_back(it->second), main.push_back(it->first);
	while (++it != pairs.end())
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
}

void	PmergeMe::fillVector(char **av, vect& myVect)
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
	std::string number1;
	while ((ss >> number1))
		myVect.push_back(atoi(number1.c_str()));
}

double	PmergeMe::getVectorTiming(void)
{
	return (this->vectorTiming);
}

/*-----------------------deque-----------------------*/

void	PmergeMe::sort(deque& myDeque)
{
	clock_t start = clock();
	size_t		i;
	deque		main, pend;
	dequePair	pairs;
	for (i = 0; i + 1 < myDeque.size(); i+=2)
		pairs.push_back(std::make_pair(myDeque[i], myDeque[i + 1]));
	if (i < myDeque.size())
		this->remain = myDeque[i];
	this->mergeSort(pairs);
	this->mainPendInsertion(pairs, main, pend);
	myDeque.clear();
	myDeque.assign(main.begin(), main.end());
	if (this->remain >= 0)
	{
		deque::iterator position = std::lower_bound(myDeque.begin(), myDeque.end(), this->remain);
		myDeque.insert(position, this->remain);
	}
	this->remain = -1;
	this->dequeTiming = static_cast<double>(std::clock() - start) / (CLOCKS_PER_SEC);
}

void	PmergeMe::mergeSort(dequePair& myPair)
{
    if (myPair.size() <= 1)
        return ;
    size_t middle = myPair.size() / 2;
    dequePair leftArr;
    dequePair rightArr;
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

void	PmergeMe::merge(dequePair &leftArr, dequePair &rightArr, dequePair &arr)
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

void	PmergeMe::mainPendInsertion(dequePair& pairs, deque& main, deque& pend)
{
	dequePair::iterator it = pairs.begin();
	pend.push_back(it->second), main.push_back(it->first);
	while (++it != pairs.end())
	{
		main.push_back(it->first);
		pend.push_back(it->second);
	}
	std::deque<int>::iterator begin = pend.begin();
	while (pend.end() != begin)
	{
		std::deque<int>::iterator position =  std::lower_bound(main.begin(), main.end(), *begin);
		main.insert(position, *begin);
		begin++;
	}
}

void	PmergeMe::fillDeque(char **av, deque& myDeque)
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
	std::string number1;
	while ((ss >> number1))
		myDeque.push_back(atoi(number1.c_str()));
}

double	PmergeMe::getDequeTiming(void)
{
	return (this->dequeTiming);
}