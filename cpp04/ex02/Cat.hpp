#ifndef __CAT_HPP__

# define __CAT_HPP__
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		~Cat();
		Cat(Cat& animal);
		Cat& operator=(Cat& animal);
		void	makeSound(void) const;
};

#endif