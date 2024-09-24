/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:24:28 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/24 16:17:57 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{}

RPN::~RPN(void)
{}

RPN::RPN(const RPN& rpn)
{
	*this = rpn;
}

RPN& RPN::operator=(const RPN& rpn)
{
	if (this != &rpn)
		;
	return *this;
}

int	RPN::getResult(void)
{
	return (this->myStack.top());
}

long RPN::calculate(long b, long a , char op)
{
	switch(op)
	{
		case '*' :
			return a * b;
		case '+' :
			return a + b;
		case '-' :
			return a - b;
		case '/' :
		{
			if (!b)
				throw std::runtime_error("division by zero is impossible");
			return a / b;
		}
	}
	return 0;
}

int	RPN::operationSign(char c)
{
	return (c == '*' || c == '+' || c == '-' || c == '/');
}

void	RPN::doOperations(const std::string& numbers)
{
	std::stringstream ss(numbers);
	std::string oneNumber;
	long resultOperation;
	while ((ss >> oneNumber))
	{
		if (oneNumber[1])
			throw std::runtime_error("Error");
		if(std::isdigit(oneNumber[0]))
			this->myStack.push(oneNumber[0] - 48);
		else if (!operationSign(oneNumber[0]) || myStack.size() < 2)
			throw std::runtime_error("Error");
		else
		{
			try
			{
				int a = myStack.top();
				myStack.pop();
				int b = myStack.top();
				myStack.pop();
				resultOperation = calculate(a, b, oneNumber[0]);
				if (resultOperation > INT_MAX || resultOperation < INT_MIN)
					throw std::runtime_error("impossible operation");
				myStack.push(resultOperation);
			}
			catch (const std::exception& e)
			{
				throw;
			}
		}
	}
}