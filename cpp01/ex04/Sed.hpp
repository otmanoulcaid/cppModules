#ifndef __SED_HPP__

# define __SED_HPP__
#include <iostream>
#include <fstream>

class Sed
{
    private:
        std::ifstream   inStream; 
        std::ofstream   outStream; 
        std::string     needle;
        std::string     haystack;
        std::string     infile;

    public:
        Sed();
        ~Sed();
        Sed(std::string     infile, std::string needle, std::string haystack);
        void    searchReplace(void);
        void    getInputStream();
        void    getOutputStream(void);
};

#endif