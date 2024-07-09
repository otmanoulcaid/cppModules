#ifndef __CAT_HPP__

# define __CAT_HPP__
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(Cat& animal);
		Cat& operator=(Cat& animal);
		void	makeSound(void) const;
};

#endif