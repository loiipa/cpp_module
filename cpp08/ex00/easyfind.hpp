/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:11:49 by cjang             #+#    #+#             */
/*   Updated: 2022/02/28 01:16:45 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <exception>
# include <algorithm>

class NotFoundException : public std::exception
{
public:
	const char* what( void ) const throw()
	{
		return "Not Found";
	}
};

template< typename T >
typename T::iterator	easyfind(T & t, int const & i)
{
	typename T::iterator	it;

	it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		throw NotFoundException();
	return it;
}

template< typename T >
typename T::const_iterator	easyfind(T const & t, int const & i)
{
	typename T::const_iterator	it;
	
	it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		throw NotFoundException();
	return it;
}

#endif
