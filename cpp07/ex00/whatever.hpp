/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:12:49 by cjang             #+#    #+#             */
/*   Updated: 2022/02/25 21:14:38 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T >
void	swap( T & x, T & y )
{
	T	tmp = x;
	x = y;
	y = tmp;
	return ;
}

template< typename T >
T const &	max( T const & x, T const & y )
{
	return( x > y ? x : y );
}

template< typename T >
T const &	min( T const & x, T const & y )
{
	return( x < y ? x : y );
}

#endif
