#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook 	phoneBook;
	std::string choice;
	int			i = 0;

	while (1)
	{
		std::cout << "what operation you want on your book contact : ";
		if (!std::getline(std::cin, choice))
			return (std::cout << std::endl, 1);
		if (!choice.compare("ADD"))
			phoneBook.addContact(i++), system("clear");
		else if (!choice.compare("SEARCH"))
		{
			int	index;
			phoneBook.displayAll();
			std::cout << "enter the contact index you are looking for : ";
			std::cin >> index;
			system("clear");
			std::cin.ignore();
			phoneBook.look(index);
		}
		else if (!choice.compare("EXIT"))
			exit(0);
		else
			std::cout << "invalid choice." << std::endl;
		choice.clear();
	}
}