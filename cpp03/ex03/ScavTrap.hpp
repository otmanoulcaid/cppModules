/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:35:33 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 16:35:34 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ScavTrap_H__

# define __ScavTrap_H__
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap();
        ScavTrap(const ScavTrap& scav);
        ScavTrap&   operator=(const ScavTrap& scav);
        void        guardGate(void);
        void        attack(const std::string& target);
};

#endif