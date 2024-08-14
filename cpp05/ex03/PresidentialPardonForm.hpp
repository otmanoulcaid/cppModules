/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:35:40 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/11 12:14:36 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __P_P_FORM_HPP__

# define __P_P_FORM_HPP__
# include <iostream>
# include "AForm.hpp"
# define P_SIGN 25
# define P_EXEC 5

class Bureaucrat;
class PresidentialPardonForm : public AForm
{
	private : 
		std::string target;
	public :
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(PresidentialPardonForm const & PPForm);
		PresidentialPardonForm& operator=(PresidentialPardonForm const & PPForm);
		void	execute(Bureaucrat const & executor) const;
		void	beSigned(const Bureaucrat& bureau);
};

#endif