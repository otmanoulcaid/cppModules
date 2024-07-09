#ifndef __ScavTrap_H__

# define __ScavTrap_H__
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap();
        ScavTrap(const ScavTrap& scav);
        ScavTrap&   operator=(const ScavTrap& scav);
        void        guardGate(void);
        void        attack(const std::string& target);
};

#endif