/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:11:39 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/24 13:24:12 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOIN_EXCHANGE_HPP__

# define __BITCOIN_EXCHANGE_HPP__
# include <algorithm>
# include <map>
# include <iostream>
# include <fstream>
# include <sstream>

enum fileType
{
	txt,
	csv
};

class BitcoinExchange
{
	private:
		std::map<std::string, double> myContainer;
	
	public:
		/*--------------Canonical Form--------------*/
		BitcoinExchange(void);
		~BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& bitcoin);
		BitcoinExchange& operator=(const BitcoinExchange& bitcoin);

		/*--------------member functions--------------*/
		int	validValue(const std::string& line);
		int onlyNumbers(const std::string& data);
		double	getCloseValue(const std::string& date);
		int	validDate(std::string line, char separator);
		int	isValidData(std::string line, char delimiter, fileType type);
		int	parseFile(const std::string& path, fileType type, char delimiter);
		void processInputLine(const std::string& date, const std::string& value);
};

#endif