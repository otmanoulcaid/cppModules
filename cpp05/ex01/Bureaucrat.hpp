/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:45:45 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/10 20:57:45 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>

class Form;

class Bureaucrat
{
	private:
		const	std::string	name;
		int					grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
		~Bureaucrat(void);
		Bureaucrat&		operator=(const Bureaucrat& bureacrat);
		std::string		getName(void) const;
		int				getGrade(void) const;
		void			incremet(void);
		void			decremet(void);
		void			signForm(Form& form) const;

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

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& bureacrat);

#endif