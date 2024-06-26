#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];

	public:
		PhoneBook();
		~PhoneBook();
		void	look(int index);
		void	displayAll(void);
		void	addContact(int index);
		void    printStr(std::string str);
		void	append(Contact contact, int position);
};

#endif