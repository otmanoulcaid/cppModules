#ifndef __HUMAN_A_HPP__

# define __HUMAN_A_HPP__
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		HumanA(void);
		~HumanA(void);
    	void    attack(void);
};

#endif
