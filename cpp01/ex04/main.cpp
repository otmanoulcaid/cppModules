/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:09:54 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/02 17:47:34 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
    (void)ac;
    if (ac != 4)
    {
        std::cout << "bad number of arguments" << std::endl;
        return (1);
    }
    Sed sed(av[1], av[2], av[3]);
	if (sed.getInputStream() || sed.getOutputStream())
		return (1);
    sed.searchReplace();
    return (0);
}
