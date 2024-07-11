#ifndef __MARTIASOURCE_HPP__

# define __MARTIASOURCE_HPP__
# include <iostream>
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];

	public:
		MateriaSource(void); 
		~MateriaSource(void);
		MateriaSource(MateriaSource& materia);
		MateriaSource& operator=(MateriaSource& materia);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};

#endif