#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Default Constructor is called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor is called" << std::endl;
}

Brain::Brain(Brain& brain)
{
    std::cout << "Brain copy Constructor is called" << std::endl;
    *this = brain;
}

Brain& Brain::operator=(Brain& brain)
{
    std::cout << "Brain copy assignement operator is called" << std::endl;
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }
    return *this;
}
