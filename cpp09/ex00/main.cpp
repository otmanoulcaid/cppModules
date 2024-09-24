/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:11:09 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/24 13:19:39 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "Error: could not open file." << std::endl, 1);
	BitcoinExchange btc;
	if (!btc.parseFile("data.csv", csv, ','))
		return (2);
	if (!btc.parseFile(av[ac - 1], txt, '|'))
		return (3);
	return (0);
}
