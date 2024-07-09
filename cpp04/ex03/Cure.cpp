#include "Cure.hpp"


AMateria* Cure::clone() const
{
	Cure *Cure = new Cure();
}

Cure::Cure(void)
{
	this->type = "Cure";
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


