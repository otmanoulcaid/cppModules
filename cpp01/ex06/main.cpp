#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "bad number of argument" << std ::endl;
        std::exit(1);
    }
    Harl harl;

    harl.complain(av[1]);
    return (0);
}
