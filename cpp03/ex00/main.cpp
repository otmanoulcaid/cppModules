#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("omar", 10, 10, 10);
    clap.attack("mustafa");
    std::cout << clap.getEnergyPoint() << std::endl;
    std::cout << clap.getHitPoint() << std::endl;
    clap.beRepaired(2);
    std::cout << clap.getEnergyPoint() << std::endl;
    std::cout << clap.getHitPoint() << std::endl;
    clap.takeDamage(10);
    std::cout << clap.getEnergyPoint() << std::endl;
    std::cout << clap.getHitPoint() << std::endl;
    clap.beRepaired(2);
    std::cout << clap.getEnergyPoint() << std::endl;
    std::cout << clap.getHitPoint() << std::endl;
    clap.takeDamage(4);
    std::cout << clap.getEnergyPoint() << std::endl;
    std::cout << clap.getHitPoint() << std::endl;
}