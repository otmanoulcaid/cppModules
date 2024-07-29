/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:34:45 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/07/30 09:38:53 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__

# define __CONTACT_HPP__
# include <iostream>

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