#ifndef __WRONGCAT_HPP__

# define __WRONGCAT_HPP__
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat& animal);
		WrongCat&	operator=(WrongCat& animal);
		void		makeSound(void) const;
};

#endif