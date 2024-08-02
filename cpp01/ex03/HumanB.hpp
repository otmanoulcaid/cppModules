/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:10:32 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/01 11:10:33 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_B_HPP__

# define __HUMAN_B_HPP__
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
    	std::string	name;
		Weapon		*weapon;

public:
    HumanB(void);
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon& weapon);
};

#endif