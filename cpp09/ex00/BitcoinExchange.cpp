#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{}

BitcoinExchange::~BitcoinExchange(void)
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& BitcoinExchange)
{
	(void)BitcoinExchange;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& BitcoinExchange)
{
	(void)BitcoinExchange;
	return *this;
}

int BitcoinExchange::onlyNumbers(const std::string& data)
{
	int	dot = 0;
	for (size_t i = 0; i < data.length(); i++)
	{
		if (data[i] == '.')
			dot++;
		else if (data[i] < '0' || data[i] > '9')
			return (0);
	}
	return (dot <= 1);
}

int	BitcoinExchange::validDate(std::string date, char separator)
{
	std::stringstream ss(date);
	std::string year, month, day;
	if (!std::getline(ss, year, separator) || !std::getline(ss, month, separator) \
		|| !std::getline(ss, day, separator))
	{
		std::cerr << "something goes wrrong while reading dates" << std::endl;
		return (0);
	}
	if (year.length() != 4 || !onlyNumbers(year) || \
		month.length() != 2 || !onlyNumbers(month) || \
		day.length() != 2 || !onlyNumbers(day))
		return (std::cerr << "not a valid date : " << date << std::endl, 0);
	return (1);
}

int	BitcoinExchange::validValue(const std::string& value)
{
	if (!onlyNumbers(value))
		return (std::cerr << "not a valid value : " << value << std::endl, 0);
	return (1);
}

double	BitcoinExchange::getCloseValue(const std::string& date)
{
	(void)date;
	std::map<std::string, double>::reverse_iterator begin = this->myContainer.rbegin();
	std::map<std::string, double>::reverse_iterator end = this->myContainer.rend();
	while (begin != end && begin->first > date)
		begin++;
	return begin->second;
}

void BitcoinExchange::processInputLine(const std::string& date, const std::string& value)
{
	double d = std::strtod(value.c_str(), NULL);
	if (date < this->myContainer.begin()->first \
	|| date > this->myContainer.rbegin()->first)
		std::cerr << "Error: bad input => " << date << std::endl;
	else if (d < 0)
		std::cerr << "Error: not a positive number." << std::endl;
	else if (d > 1000)
		std::cerr << "Error: too large a number." << std::endl;
	else
		std::cout << date << " => " << d * getCloseValue(date) << std::endl;
}

int	BitcoinExchange::isValidData(std::string line, char delimiter, fileType type)
{
	std::stringstream ss(line);
	std::string date;
	std::string value;
	if ((!ss.eof() && !std::getline(ss, date, delimiter)) \
	|| (!ss.eof() && !std::getline(ss, value, delimiter)))
	{
		std::cerr << "something goes wrong while parsing file content" << std::endl;
		return (0);
	}
	if (type == csv && !validDate(date, '-'))
		return (0);
	if (type == csv && !validValue(value))
		return (0);
	if (type == csv)
		this->myContainer.insert(std::pair<std::string, double>(date, std::strtod(value.c_str(), NULL)));
	else
		processInputLine(date, value);
	return (1);
}

int	BitcoinExchange::parseFile(const std::string& path, fileType type, char delimiter)
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
		if (!isValidData(line, delimiter, type))
			return (input.close(), 0);
	return (input.close(), 1);
}
