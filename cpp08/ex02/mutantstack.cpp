/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:00:27 by cjang             #+#    #+#             */
/*   Updated: 2022/03/01 02:13:13 by cjang            ###   ########.fr       */
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
typename MutantStack<T>::iterator	MutantStack<T>::begin( void )
{
	return this->c.begin();
}

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::end( void )
{
	return this->c.end();
}

#endif
