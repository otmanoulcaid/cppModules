/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:39:40 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 12:13:04 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __R_R_FORM_HPP__

# define __R_R_FORM_HPP__
# include <iostream>
# include "AForm.hpp"

class Bureaucrat;
class RobotomyRequestForm : public AForm
{
	private : 
		std::string target;
		int			gradeExec;
		int			gradeSign;

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