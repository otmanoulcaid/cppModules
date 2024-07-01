/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 22:11:56 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/06/26 14:18:12 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    put_one(std::string arg)
{
    for (size_t i = 0; i < arg.length(); i++)
    {
        if (arg[i] >= 'a' && arg[i] <= 'z')
            arg[i] -= 32;
        std::cout << arg[i];
    }
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (!(ac - 1))
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (++i < ac)
        put_one(av[i]);
    std::cout << "\n";
    return (0);
}