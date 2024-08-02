/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:09:45 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/02 17:53:08 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed()
{
	std::cout << "the default constructor is called" << std::endl;
}

Sed::~Sed(void)
{
	std::cout << "the destructor is called" << std::endl;
}

Sed::Sed(std::string infile, std::string needle, std::string haystack) : needle(needle), haystack(haystack), infile(infile)
{
	std::cout << "the constructor is called" << std::endl;
}

void    Sed::searchReplace()
{
	std::string line;

	while ((std::getline(this->inStream, line)))
	{
		size_t index = 0;
		while ((index = (line.find(this->needle, index))) != std::string::npos)
		{
			line.erase(index, needle.length());
			line.insert(index, haystack);
			index += haystack.length();
		}
		this->outStream << line << std::endl;
	}
	this->inStream.close();
	this->outStream.close();
}

int	Sed::getInputStream(void)
{
	this->inStream.open(this->infile);
    if (this->inStream.fail())
    {
        std::cerr << "error openning file " << this->infile << std::endl;
        return (1);
    }
	return (0);
}

int	Sed::getOutputStream(void)
{
	if (this->needle.empty())
		return (1);
	std::string str = this->infile;
    str.append(".replace");
	this->outStream.open(str);
    if (this->outStream.fail())
    {
        std::cerr << "error openning file " << str << std::endl;
		return (1);
    }
	return (0);
}
