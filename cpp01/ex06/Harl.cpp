#include "Harl.hpp"

void    Harl::debug(void)
{    
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\
    \nI really do" << std::endl; 
}
void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; 
}
void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for\
years whereas you started working here since last month." << std::endl; 
}
void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl; 
}

Harl::Harl(){}
Harl::~Harl(){}
void    Harl::complain(std::string level)
{
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string a[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;
    while(++i < 4 && a[i].compare(level))
        ;
    if (i == 4)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 
        std::exit(2);
    }
    while (i < 4)
    {
        std::cout << "[ " << a[i] << " ]" << std::endl;
        (this->*f[i++])();
        std::cout << std::endl;
    }
}