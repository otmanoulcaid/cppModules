#ifndef __ScavTrap_H__

# define __ScavTrap_H__
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap();
        ScavTrap(const ScavTrap& scav);
        ScavTrap&   operator=(const ScavTrap& scav);
        void        guardGate(void);
};

#endif