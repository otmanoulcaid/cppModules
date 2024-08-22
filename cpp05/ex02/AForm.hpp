/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 21:37:38 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 01:09:30 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM_HPP__
# define __AFORM_HPP__
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const	std::string	name;
		const	int			gradeSign;
		const	int			gradeExec;
		bool				isSigned;
		
	public:
		/*--------------cnstructors----------------*/
		AForm(void);
		~AForm(void);
		AForm(const AForm& Aform);
		AForm& operator=(const AForm& Aform);
		AForm(const std::string name, const int gradeSign, const int gradeExec);
		
		/*------------MemberFunctions-----------*/
		virtual void	beSigned(const Bureaucrat& bureau);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		
		/*-------------GETTERS--------------*/
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		bool		getIsSigned(void) const;
		std::string	getName(void) const;
		void		setIsSigned(bool state);

		/*============ClassException==========*/
		class GradeTooHighException : public std::exception
		{
			const char *errMsg;
			public :
				GradeTooHighException(const char *errMsg) throw();
				const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char *errMsg;
			public :
				GradeTooLowException(const char *errMsg) throw();
				const char *what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream &out, const AForm& bureacrat);

#endif