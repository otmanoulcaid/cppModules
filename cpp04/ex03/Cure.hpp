#ifndef __CURE_HPP__

# define __CURE_HPP__
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure(Cure& cure);
		Cure& operator=(Cure& cure);
		AMateria* clone() const;
};

#endif