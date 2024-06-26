#ifndef CONTACT
#define CONTACT
#include <iostream>

class Contact
{
	private:
		static int	instance;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
		int			index;

	public:
		Contact();
		~Contact();
		std::string	getFName(void);
		std::string	getLName(void);
		std::string	getNName(void);
		int			getIndex(void);
		void		newContact(void);
		void		displayInfo(void);
};

#endif