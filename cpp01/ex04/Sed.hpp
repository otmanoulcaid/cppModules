/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:09:41 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/02 17:46:51 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SED_HPP__

# define __SED_HPP__
# include <iostream>
# include <fstream>

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
        Sed(std::string infile, std::string needle, std::string haystack);
        void    searchReplace(void);
        int		getInputStream();
        int		getOutputStream(void);
};

#endif