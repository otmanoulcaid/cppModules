/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:35:12 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/17 16:35:13 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__

# define __FRAGTRAP_HPP__
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap();
        FragTrap(const FragTrap& scav);
        FragTrap&   operator=(const FragTrap& scav);
        void        highFivesGuys(void);
};

#endif