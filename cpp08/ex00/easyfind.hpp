/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:53:31 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/15 15:58:29 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASY_HPP__

# define __EASY_HPP__
# include <algorithm>
# include <iostream>

template<typename T>
void	easyfind(T container, int occ)
{
	if (std::find(container.begin(), container.end(), occ) != container.end())
		std::cout << "element found in the container : " << occ << std::endl;
	else
		throw std::runtime_error("not found");;
}

#endif
