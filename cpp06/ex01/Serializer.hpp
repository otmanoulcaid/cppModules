/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:28:44 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/08/15 11:27:33 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_HPP__

# define __SERIALIZER_HPP__
# include <iostream>

struct Data;
class Serializer
{
	private :
		Serializer(void);
		~Serializer(void);
		Serializer(const Serializer& ser);
		Serializer& operator=(const Serializer& ser);

	public :
		static uintptr_t	serialize(Data* ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif