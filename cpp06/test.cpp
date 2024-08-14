#include <sstream>
#include <iostream>

int main(int ac, char **av)
{
	std::stringstream s(av[ac - 1]);
	float a;
	s >> a;
	std::cout << ">> " << a << " <<\n";
	int b = a;
	std::cout << ">> " << b << " <<\n";
}