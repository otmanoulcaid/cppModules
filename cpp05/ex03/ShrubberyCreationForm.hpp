/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:44:34 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 13:49:53 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __S_C_FORM_HPP__

# define __S_C_FORM_HPP__
# include <iostream>
# include <fstream>
# include "AForm.hpp"

class Bureaucrat;
class ShrubberyCreationForm : public AForm
{
	private :
		std::string target;
		int			gradeExec;
		int			gradeSign;
	public :
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm const & PPForm);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & PPForm);
		void		execute(Bureaucrat const & executor) const;
		void		beSigned(const Bureaucrat& bureau);
		std::string	getTarget(void);
};

#endif