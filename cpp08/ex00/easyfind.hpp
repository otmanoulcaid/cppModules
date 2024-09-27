/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:53:31 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/27 14:40:06 by ooulcaid         ###   ########.fr       */
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
		std::cout << "element "<< occ << " found in the container " << std::endl;
	else
		throw std::runtime_error("the element not found");;
}

#endif
