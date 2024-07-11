#ifndef __ICE_HPP__

# define __ICE_HPP__
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		Ice(Ice& ice);
		Ice& operator=(Ice& ice);
		std::string const & getType() const; //Returns the materia type
		virtual void use(ICharacter& target);
		AMateria* clone() const;
};

#endif