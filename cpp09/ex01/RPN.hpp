#ifndef __RPN_HPP__

# define __RPN_HPP__
# include <iostream>
# include <sstream>
# include <algorithm>
# include <stack>

class RPN
{
	private:
		std::stack<int> myStack;

	public:
		/*--------------Canonical Form--------------*/
		RPN(void);
		~RPN(void);
		RPN(const RPN& rpn);
		RPN& operator=(const RPN& rpn);

		/*--------------member functions--------------*/
		void	doOperations(const std::string& numbers);
		long	calculate(long a, long b, char op);
		int		operationSign(char c);
		int		getResult(void);

};

#endif