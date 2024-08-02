/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:09:01 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/01 11:09:02 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H_HPP

# define __HARL_H_HPP
# include <iostream>

enum complain
{
	eDebug,
	eInfo,
	eWarning,
	eError,
	none
};

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

    public:
        Harl();
        ~Harl();
        void    		complain(std::string level);
		enum complain	decrypt(std::string complain);
};

#endif