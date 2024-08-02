/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:10:07 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/01 11:10:08 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__

# define __WEAPON_HPP__
# include <iostream>
# include "Weapon.hpp"


class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		const std::string&	getType();
		void				setType(std::string type);
};


#endif