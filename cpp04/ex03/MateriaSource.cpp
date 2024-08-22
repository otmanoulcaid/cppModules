#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "MateriaSource default Constructor is called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
	std::cout << "MateriaSource destructor is called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource& materia)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "MateriaSource Copy Constructor is called" << std::endl;
	*this = materia;
}

MateriaSource& MateriaSource::operator=(MateriaSource& materia)
{
	std::cout << "MateriaSource Copy assignement operator is called" << std::endl;
	if (this != &materia)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->materia[i])
				delete this->materia[i];
			if (materia.materia[i])
				this->materia[i] = materia.materia[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = materia;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] && !this->materia[i]->getType().compare(type))
			return this->materia[i]->clone();
	}
	return 0;
}
