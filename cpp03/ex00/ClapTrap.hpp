#ifndef __ClapTrap_H__

# define __ClapTrap_H__
# include <iostream>

class ClapTrap
{
private:
	std::string name;
	int         __hitPoint;
	int         __energyPoint;
	int         __attackDamage;
public:
	ClapTrap(std::string name, int hit, int energy, int damage);
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap& clap);
	ClapTrap&	operator=(const ClapTrap& clap);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif