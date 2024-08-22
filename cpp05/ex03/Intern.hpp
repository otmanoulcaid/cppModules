/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:20:50 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 03:30:55 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__

# define __INTERN_HPP__
# include <iostream>

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern& intern);
		Intern& operator=(const Intern& intern);
		AForm	*makeForm(std::string name, std::string target);
};

#endif
