/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 22:11:56 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/07/29 14:57:55 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    put_one(std::string arg)
{
    for (size_t i = 0; i < arg.length(); i++)
    {
        if (std::islower(arg[i]))
        	arg[i] = std::toupper(arg[i]);
		std::cout << arg[i];
    }
}

int main(int ac, char **av)
{
    int i;

    if (!(ac - 1))
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    i = 0;
    while (++i < ac)
        put_one(av[i]);
    std::cout << "\n";
    return (0);
}
