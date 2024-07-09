#ifndef __BRAIN_HPP__

# define __BRAIN_HPP__
# include <iostream>

class Brain
{
    protected:
        std::string ideas[100];

    public:
        Brain(void);
        ~Brain(void);
        Brain(Brain& brain);
        Brain& operator=(Brain& brain);
};

#endif