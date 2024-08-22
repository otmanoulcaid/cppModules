/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:39:40 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 01:24:03 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __R_R_FORM_HPP__

# define __R_R_FORM_HPP__
# include <iostream>
# include "AForm.hpp"
# define R_SIGN 72
# define R_EXEC 45

class Bureaucrat;
class RobotomyRequestForm : public AForm
{
	private : 
		std::string target;
	public :
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(RobotomyRequestForm const & PPForm);
		RobotomyRequestForm& operator=(RobotomyRequestForm const & PPForm);
		void	execute(Bureaucrat const & executor) const;
		void	beSigned(const Bureaucrat& bureau);
};

#endif