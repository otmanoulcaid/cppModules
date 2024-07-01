#ifndef __FIXED_HPP__

# define __FIXED_HPP__
# include <iostream> 

class Fixed
{
    private:
        int         value;
        static int  __fract;

    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed& fixed);
        Fixed&  operator=(Fixed& fixed);
        int     getRawBits( void ) const;
        void	setRawBits(int const raw);
};

#endif