/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:43:17 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/27 14:43:19 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <vector>
# include <deque>
# include <list>

template<typename T>
static void print(T begin, T end)
{
	while (begin != end)
		std::cout << *(begin++) << "   ";
	std::cout << std::endl;
}

int main(void)
{
	std::vector<int> vectContainer;
	vectContainer.push_back(1);
	vectContainer.push_back(2);
	vectContainer.push_back(3);
	try
	{
		std::cout << ">>>> vector <<<<" << std::endl;
		print(vectContainer.begin(), vectContainer.end());
		easyfind(vectContainer, 5);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	/*---------------------------------------------*/

	std::cout << ">>>> list <<<<" << std::endl;
	std::list<int> listConatainer;
	listConatainer.push_back(4);
	listConatainer.push_back(5);
	listConatainer.push_back(6);
	try
	{
		print(listConatainer.begin(), listConatainer.end());
		easyfind(listConatainer, 5);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	/*---------------------------------------------*/
	
	std::cout << ">>>> deque <<<<" << std::endl;
	std::deque<int> dequeContainer;
	dequeContainer.push_back(7);
	dequeContainer.push_back(8);
	dequeContainer.push_back(9);
	try
	{
		print(dequeContainer.begin(), dequeContainer.end());
		easyfind(dequeContainer, 5);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}