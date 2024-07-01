/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:37:42 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/06/26 22:29:21 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

void    check(){system("leaks zombie");}

int main()
{
    Zombie *zombie  = zombieHorde(5, "hamada");
    for (int i = 0; i < 5; i++)
        (zombie + i)->announce();
    delete[] zombie;
}
