#include <iostream>
int main(void)
{
	const int a = 10;
	int &b = const_cast<int &>(a);
	b = 66;
	int *p = const_cast<int *>(&a);
	*p = 20;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << *p << std::endl;
	std::cout << "=========================" << std::endl;
	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	std::cout << p << std::endl;
}