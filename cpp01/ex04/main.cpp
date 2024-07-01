#include "Sed.hpp"

int main(int ac, char **av)
{
    (void)ac;
    if (ac != 4)
    {
        std::cout << "bad number of arguments" << std::endl;
        return (1);
    }
    Sed sed(av[1], av[2], av[3]);
    sed.getInputStream();
    sed.getOutputStream();
    sed.searchReplace();
    return (0);
}
