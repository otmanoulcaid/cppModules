/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:11:09 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/29 22:44:34 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	BitcoinExchange btc;
	if (!btc.parseFileCsv("data.csv"))
		return (2);
	if (!btc.parseFileTxt(av[ac - 1]))
		return (3);
	return (0);
}
