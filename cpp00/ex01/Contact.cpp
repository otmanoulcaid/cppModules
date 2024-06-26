#include "Contact.hpp"
int	Contact::instance = 0;

Contact::Contact()
{
	this->index = Contact::instance++ % 8;
}

Contact::~Contact(){}

int		Contact::getIndex(void)
{
	return (this->index);
}

std::string	Contact::getFName(void)
{
	return (Contact::firstName);
}

std::string	Contact::getLName(void)
{
	return (Contact::lastName);
}

std::string	Contact::getNName(void)
{
	return (Contact::nickname);
}

void	Contact::newContact(void)
{
	std::cout << "enter the contact first name : ";
	if (!std::getline(std::cin, this->firstName))
		exit(2);
	std::cout << "enter the contact last name : ";
	if (!std::getline(std::cin, this->lastName))
		exit(3);
	std::cout << "enter the contact nick name : ";
	if (!std::getline(std::cin, this->nickname))
		exit(4);
	std::cout << "enter the contact phone number : ";
	if (!std::getline(std::cin, this->phoneNumber))
		exit(5);
	std::cout << "enter the contact darkest secret : ";
	if (!std::getline(std::cin, this->darkestSecret))
		exit(6);
}

void	Contact::displayInfo(void)
{
	std::cout << "first name : " << this->firstName << std::endl;
	std::cout << "last name : " << this->lastName << std::endl;
	std::cout << "Nick name : " << this->nickname << std::endl;
	std::cout << "phone number : " << this->phoneNumber << std::endl;
	std::cout << "darkest secret : " << this->darkestSecret << std::endl;
}
