/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:42:56 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/23 18:23:42 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_HPP__

# define __BASE_HPP__
# include <iostream>

class Base
{
	public:
		virtual ~Base();
		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
};

#endif