#ifndef __CHARACTER_HPP__

# define __CHARACTER_HPP__
# include <iostream>
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*invent[4];

	public:
		Character(std::string name);
		Character(void); 
		~Character();
		Character(Character& character);
		Character& operator=(Character& materia);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif