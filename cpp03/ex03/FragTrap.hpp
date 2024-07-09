#ifndef __FRAGTRAP_HPP__

# define __FRAGTRAP_HPP__
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap();
        FragTrap(const FragTrap& scav);
        FragTrap&   operator=(const FragTrap& scav);
        void        highFivesGuys(void);
};

#endif