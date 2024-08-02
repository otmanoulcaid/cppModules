#include <iostream>

int (*func)(int a);

int multiple(int a)
{
	return a * 2;
}

int main()
{
func = multiple;
std::cout << func(5);
}

//double (className::*tripleValue)(double d);
//tripleValue = &className::memberFunction
//(objPtr->*triplValue)(3.2)
