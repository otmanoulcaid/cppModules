#ifndef __HUMAN_B_HPP__

# define __HUMAN_B_HPP__
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
    	std::string	name;
		Weapon		*weapon;

public:
    HumanB(void);
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon& weapon);
};

#endif