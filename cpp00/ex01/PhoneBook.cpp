#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

void	PhoneBook::append(Contact contact, int position)
{
    this->contact[position % 8] = contact;
}

void    PhoneBook::addContact(int index)
{
    this->contact[index % 8] = Contact();
    this->contact[index % 8].newContact();
}

void    PhoneBook::printStr(std::string str)
{
    int i = str.length() > 7 ? 0 : 8 - str.length();
    for (int j = 0; j < i; j++)
        std::cout << " ";
    for (int j = 0; str[j], j < 7; j++)
        std::cout << str[j];
    if (!i)
        std::cout << ".";
}

void    PhoneBook::displayAll(void)
{
    std::cout << "  index |  fName |lastName|nickname" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << "       " << this->contact[i].getIndex();
        std::cout << "|";
        this->printStr(this->contact[i].getFName());
        std::cout << "|";
        this->printStr(this->contact[i].getLName());
        std::cout << "|";
        this->printStr(this->contact[i].getNName());
        std::cout << "\n";
    }
}

void    PhoneBook::look(int index)
{
    if (index < 0 || index > 7)
        std::cout << "index out of range" << std::endl;
    else
        this->contact[index].displayInfo();
}
