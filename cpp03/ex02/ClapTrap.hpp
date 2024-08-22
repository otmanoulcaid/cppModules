/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:28:00 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 16:28:01 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ClapTrap_H__

# define __ClapTrap_H__
# include <iostream>

class ClapTrap
{
	protected:
		std::string 	name;
		unsigned int	hitPoint;
		unsigned int	energyPoint;
		unsigned int	attackDamage;

	public:
		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap& clap);
		ClapTrap&	operator=(const ClapTrap& clap);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		setName(std::string name);
};

#endif