#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->invent[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->inventSave[i] = NULL;
	std::cout << "Character default Constructor is called" << std::endl;
}

Character::Character(std::string name)
{
	for (int i = 0; i < 4; i++)
		this->invent[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->inventSave[i] = NULL;
	this->name = name;
	std::cout << "Character Constructor is called" << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventSave[i])
			delete this->inventSave[i];
	}
	std::cout << "Character destructor is called" << std::endl;
}

Character::Character(Character& materia)
{
	std::cout << "Character Copy Constructor is called" << std::endl;
	*this = materia;
}

Character& Character::operator=(Character& materia)
{
	std::cout << "Character Copy assignement operator is called" << std::endl;
	if (this != &materia)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventSave[i])
			{
				delete this->inventSave[i];
				this->inventSave[i] = NULL;
				this->invent[i] = NULL;
			}
			if (materia.inventSave[i])
			{
				AMateria *ptr = materia.inventSave[i]->clone();
				this->inventSave[i] = ptr;
				if (materia.invent[i])
					this->invent[i] = ptr;
			}
		}
		this->name = materia.name;
	}
	return *this;
}

std::string const & Character::getName(void) const
{
	return this->name;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->invent[idx])
		this->invent[idx]->use(target);
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->invent[idx] = NULL;
}

void	Character::equip(AMateria* materia)
{
	int	i = 0;
	while (i < 4 && this->invent[i])
		i++;
	if (i < 4)
	{
		if (this->inventSave[i])
			delete this->inventSave[i];
		this->invent[i] = materia;
		this->inventSave[i] = materia;
	}
	else if (materia)
		delete materia;
}
