#include "Ice.hpp"

AMateria* Ice::clone() const
{
	return new Ice();
}

Ice::Ice(void)
{
	this->type = "ice";
	std::cout << "Ice default Constructor is called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor is called" << std::endl;
}

Ice::Ice(Ice& materia)
{
	std::cout << "Ice Copy Constructor is called" << std::endl;
	*this = materia;
}

Ice& Ice::operator=(Ice& materia)
{
	std::cout << "Ice Copy assignement operator is called" << std::endl;
	if (this != &materia)
		this->type = materia.type;
	return *this;
}

std::string const & Ice::getType(void) const
{
	return this->type;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
