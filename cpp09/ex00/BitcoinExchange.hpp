/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:11:39 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/29 23:00:04 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOIN_EXCHANGE_HPP__

# define __BITCOIN_EXCHANGE_HPP__
# include <algorithm>
# include <map>
# include <iostream>
# include <fstream>
# include <sstream>


typedef std::map<std::string, double> String;

class BitcoinExchange
{
	private:
		std::map<std::string, double> myContainer;
	
	public:
		/*--------------Canonical Form--------------*/
		BitcoinExchange(void);
		~BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange& bitcoin);
		BitcoinExchange& operator=(BitcoinExchange& bitcoin);

		/*--------------member functions--------------*/
		String::iterator	end();
		String::iterator	begin();
		int					validDate(std::string date);
		int					parseFileCsv(const std::string& path);
		int					parseFileTxt(const std::string& path);
		double				getCloseValue(const std::string& date);
		int					isValidCsvData(const std::string& line);
		int					isValidTxtinput(const std::string& line);
		int					validAmount(std::string value, size_t index);


};

#endif