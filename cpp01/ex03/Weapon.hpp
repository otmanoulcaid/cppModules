#ifndef __WEAPON_HPP__

# define __WEAPON_HPP__
# include <iostream>
# include "Weapon.hpp"


class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		const std::string&	getType() ;
		void				setType(std::string type);
};


#endif