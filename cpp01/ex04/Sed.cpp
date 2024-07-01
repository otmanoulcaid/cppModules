#include "Sed.hpp"

Sed::Sed()
{
	std::cout << "the default constructor is called" << std::endl;
}

Sed::~Sed(void)
{
	std::cout << "the destructor is called" << std::endl;
}

Sed::Sed(std::string infile, std::string needle, std::string haystack)
{
	this->infile = infile;
	this->needle = needle;
	this->haystack = haystack;
}

void    Sed::searchReplace()
{
	size_t index;
	std::string line;

	while ((std::getline(this->inStream, line)))
	{
		index = line.find(this->needle, 0);
		if (index != std::string::npos )
		{
			line.erase(index, needle.length());
			line.insert(index, haystack);
		}
		std::cout << line << std::endl;
		this->outStream << line << std::endl;
	}
}

void	Sed::getInputStream(void)
{
	this->inStream.open(this->infile);
    if (this->inStream.fail())
    {
        std::cerr << "error openning file " << this->infile << std::endl;
        std::exit(2);
    }
}

void	Sed::getOutputStream(void)
{
	std::string str = this->infile;
    str.append(".replace");
	this->outStream.open(str);
    if (this->outStream.fail())
    {
        std::cerr << "error openning file " << str << std::endl;
		std::exit(3);
    }
}
