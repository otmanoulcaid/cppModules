#ifndef __HARL_H_HPP

# define __HARL_H_HPP
# include <iostream>

class Harl
{
    private:
        /*----------------------membre functions----------------------*/
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

    public:
        Harl();
        ~Harl();

        /*----------------------membre functions----------------------*/
        void    complain(std::string level);
};

#endif