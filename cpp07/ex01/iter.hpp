/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:32:08 by cjang             #+#    #+#             */
/*   Updated: 2022/02/25 21:18:51 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template< typename T >
void	iter(T* arr, int const & len, void (&func)(T const &))
{
	if (arr == NULL || len < 0)
		return ;
	for (int i = 0; i < len; i++)
		func(arr[i]);
	return ;
}


template< typename T >
void 	printValue(T const & t)
{
	std::cout << t << std::endl;
	return ;
}

#endif
