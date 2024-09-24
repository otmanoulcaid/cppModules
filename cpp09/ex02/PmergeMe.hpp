/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:56:20 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/09/24 15:59:02 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__

# define __PMERGEME_HPP__

class PmergeMe
{
	private:
		/* data */
	public:
		PmergeMe(void);
		~PmergeMe(void);
		PmergeMe(const PmergeMe& pmerge);
		PmergeMe&	operator=(const PmergeMe& pmerge);
};

#endif