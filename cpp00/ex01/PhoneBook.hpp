/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:35:31 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/06/26 19:35:52 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__

# define __PHONEBOOK_HPP__
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];

	public:
		PhoneBook();
		~PhoneBook();
		void    search(void);
		void	look(int index);
		void	displayAll(void);
		void	addContact(int index);
		void    printStr(std::string str);
		void	append(Contact contact, int position);
};

#endif