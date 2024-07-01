/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:33:29 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/06/26 22:30:18 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__

# define __ZOMBIE_H__
# include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        std::string getName(void);
        void        announce(void);
        void        setName(std::string name);
};

#endif
