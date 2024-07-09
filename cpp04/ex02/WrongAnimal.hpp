#ifndef __WRONGANIMAL_HPP__

# define __WRONGANIMAL_HPP__
# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal& animal);
		WrongAnimal&	operator=(WrongAnimal& animal);
		void			makeSound(void) const;
		std::string     getType(void) const;
};

#endif