/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:34:58 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 17:04:33 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__

# define __DIAMONDTRAP_HPP__
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap(std::string name);
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap& clap);
    DiamondTrap&	operator=(const DiamondTrap& clap);
	void			attack(const std::string& target);
    void            WhoAmI(void);
};

#endif