#include "Cure.hpp"


AMateria* Cure::clone() const
{
	return new Cure();
}

Cure::Cure(void)
{
	this->type = "cure";
	std::cout << "Cure default Constructor is called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor is called" << std::endl;
}

Cure::Cure(Cure& materia)
{
	std::cout << "Cure Copy Constructor is called" << std::endl;
	*this = materia;
}

Cure& Cure::operator=(Cure& materia)
{
	std::cout << "Cure Copy assignement operator is called" << std::endl;
	if (this != &materia)
		this->type = materia.type;
	return *this;
}

std::string const & Cure::getType(void) const
{
	return this->type;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "'s Wounds *" << std::endl;
}
