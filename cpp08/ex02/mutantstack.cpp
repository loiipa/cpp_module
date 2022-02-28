/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:00:27 by cjang             #+#    #+#             */
/*   Updated: 2022/02/28 19:28:14 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CPP
# define MUTANTSTACK_CPP

#include "mutantstack.hpp"

template < typename T >
MutantStack<T>::MutantStack( void )
{
	return ;
}

template < typename T >
MutantStack<T>::MutantStack( MutantStack const & src )
{
	(void) src;
	return ;
}

template < typename T >
MutantStack<T>::~MutantStack( void )
{
	return ;
}

template < typename T >
MutantStack<T> &	MutantStack<T>::operator=( MutantStack const & rhs )
{
	(void) rhs;
	return *this;
}

template < typename T >
void	MutantStack<T>::begin( void ) const
{
	std::cout << *(this->c.begin()) << std::endl;
	return ;
}

// template < typename T >
// typename std::stack<T>::container_type::iterator	MutantStack<T>::end( void ) const
// {
// 	return std::stack<T>::container_type::iterator.end();
// }

#endif
