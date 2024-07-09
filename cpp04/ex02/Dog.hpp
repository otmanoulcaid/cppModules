#ifndef __DOG_HPP__

# define __DOG_HPP__
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;

	public:
		Dog();
		~Dog();
		Dog(Dog& animal);
		Dog& operator=(Dog& animal);
		void	makeSound(void) const;
};

#endif