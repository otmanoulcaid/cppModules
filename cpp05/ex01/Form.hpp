/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:15:56 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/22 00:43:24 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

class Bureaucrat;

class Form
{
private:
	const	std::string	name;
	const	int			gradeSign;
	const	int			gradeExec;
	bool				isSigned;
	
public:
	/*--------------cnstructors----------------*/
	Form(void);
	~Form(void);
	Form(const Form& form);
	Form& operator=(const Form& form);
	Form(const std::string name, const int gradeSign, const int gradeExec);
	
	/*------------MemberFunctions-----------*/
	void	beSigned(const Bureaucrat& bureau);
	
	/*-------------GETTERS--------------*/
	int			getGradeSign(void) const;
	int			getGradeExec(void) const;
	bool		getIsSigned(void) const;
	std::string	getName(void) const;

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

std::ostream&	operator<<(std::ostream &out, const Form& bureacrat);

#endif