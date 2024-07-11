#ifndef __CURE_HPP__

# define __CURE_HPP__
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure(Cure& cure);
		Cure& operator=(Cure& cure);
		std::string const & getType() const; //Returns the materia type
		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif