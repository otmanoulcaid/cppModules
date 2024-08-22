/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:27:09 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 17:06:21 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ClapTrap_H__

# define __ClapTrap_H__
# include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitPoint;
		unsigned int	energyPoint;
		unsigned int	attackDamage;
	public:
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& clap);
		ClapTrap&		operator=(const ClapTrap& clap);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			setName(std::string name);
	};

#endif
