#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default Constructor is called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor is called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Constructor is called" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria& materia)
{
	std::cout << "AMateria Copy Constructor is called" << std::endl;
	*this = materia;
}

AMateria& AMateria::operator=(AMateria& materia)
{
	std::cout << "AMateria Copy assignement operator is called" << std::endl;
	if (this != &materia)
		this->type = materia.type;
	return *this;
}

std::string	const & AMateria::getType(void) const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
