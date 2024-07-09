#ifndef __ANIMAL_HPP__

# define __ANIMAL_HPP__
# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal& animal);
		Animal& operator=(Animal& animal);
		virtual void	makeSound(void) const;
		std::string     getType(void) const;
};

#endif