#ifndef __DIAMONDTRAP_HPP__

# define __DIAMONDTRAP_HPP__
# include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap(std::string name);
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap& clap);
    DiamondTrap&	operator=(const DiamondTrap& clap);
    void            WhoAmI(void);
    int	            get(void);
};

#endif