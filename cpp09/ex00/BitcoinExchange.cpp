#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{}

BitcoinExchange::~BitcoinExchange(void)
{}

BitcoinExchange::BitcoinExchange(BitcoinExchange& bitcoinExchange)
{
	*this = bitcoinExchange;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& bitcoin)
{
	if (this != &bitcoin)
	{
		this->myContainer.clear();
		String::iterator it = bitcoin.begin();
		while (it != bitcoin.end())
		{
			this->myContainer[it->first] = it->second;
			it++;
		}
	}
	return *this;
}

String::iterator	BitcoinExchange::begin()
{
	return (this->myContainer.begin());
}

String::iterator	BitcoinExchange::end()
{
	return (this->myContainer.end());
}

int		BitcoinExchange::validAmount(std::string value, size_t index)
{
	size_t	i;
	for (i = index; i < value.size(); i++)
		if ((value[i] < '0' || value[i] > '9') && value[i] != '.')
			return (0);
	return (i != index);
}

int		BitcoinExchange::validDate(std::string date)
{
	std::stringstream ss(date);
	std::string year, month, day;
	if (!std::getline(ss, year, '-') || !std::getline(ss, month, '-') || !std::getline(ss, day, '-'))
		return (0);
	if (year.size() != 4 || month.size() != 2 || day.size() != 2)
		return (0);
	if (month > "12" || month < "01" || day < "01" || day > "31")
		return (0);
	if (month == "02" && month > "29")
		return (0);
	return (1);
}

double	BitcoinExchange::getCloseValue(const std::string& date)
{
	(void)date;
	String::reverse_iterator begin = this->myContainer.rbegin();
	String::reverse_iterator end = this->myContainer.rend();
	while (begin != end && begin->first > date)
		begin++;
	return begin->second;
}

int		BitcoinExchange::isValidTxtinput(const std::string& line)
{
	std::stringstream ss(line);
	std::string date;
	std::string value;
	if (!std::getline(ss, date, '|'))
		return (std::cout << "empty line" << std::endl, 0);
	if (!std::getline(ss, value, '|') || date.size() != 11)
		return (std::cout << "Error: bad input => " << date << std::endl, 0);
	date.pop_back();
	if (!validDate(date))
		return (std::cout << "Error: bad input => " << date << std::endl, 0);
	if (date > (--myContainer.end())->first)
		return (std::cout << "Error: bad input => " << date << std::endl, 0);
	if (std::strtol(value.c_str(), NULL, 10) < 0)
		return (std::cout << "Error: not a positive number." << std::endl, 0);
	if (std::strtol(value.c_str(), NULL, 10) > 1000)
		return (std::cout << "EError: too large a number." << std::endl, 0);
	if (value[0] != ' ' || !validAmount(value, 1))
		return (std::cout << "Error: bad input => " << value << std::endl, 0);
	double closeValue = getCloseValue(date);
	std::cout << date << " =>" << value << " = " << closeValue * std::strtod(value.c_str(), NULL) << std::endl;;
	return (1);
}

int		BitcoinExchange::isValidCsvData(const std::string& line)
{
	std::stringstream ss(line);
	std::string date;
	std::string value;
	if (!std::getline(ss, date, ',') || !std::getline(ss, value, ','))
		return (0);
	if ((date.size() == 10 && !validDate(date)) || !validAmount(value, 0))
		return (std::cout<< "not a valid data set" << std::endl, 0);
	this->myContainer.insert(std::pair<std::string, double>(date, std::strtod(value.c_str(), NULL)));
	return (1);
}

int	BitcoinExchange::parseFileCsv(const std::string& path)
{
	std::ifstream input;
	input.open(path);
	if (input.fail())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (0);
	}
	std::string line;
	std::getline(input, line);
	while (std::getline(input, line) && line[0])
		if (!isValidCsvData(line))
			return (input.close(), 0);
	return (input.close(), 1);
}

int	BitcoinExchange::parseFileTxt(const std::string& path)
{
	std::ifstream input;
	input.open(path);
	if (input.fail())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (0);
	}
	std::string line;
	std::getline(input, line);
	while (std::getline(input, line))
		isValidTxtinput(line);
	return (input.close(), 1);
}
