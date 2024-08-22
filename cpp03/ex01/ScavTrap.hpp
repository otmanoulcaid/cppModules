/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:27:48 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 17:07:59 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ScavTrap_H__

# define __ScavTrap_H__
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ~ScavTrap();
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& scav);
        ScavTrap&   operator=(const ScavTrap& scav);
        void        guardGate(void);
        void        attack(const std::string& target);
};

#endif