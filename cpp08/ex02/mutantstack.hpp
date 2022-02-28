/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:00:39 by cjang             #+#    #+#             */
/*   Updated: 2022/03/01 04:05:36 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template < typename T >
class MutantStack : public std::stack<T>
{
public:

	MutantStack( void );
	MutantStack( MutantStack const & src );
	~MutantStack( void );

	MutantStack<T> &	operator=( MutantStack const & rhs );

	typedef typename std::stack<T>::container_type::iterator				iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator			begin( void );
	iterator	 		end( void );
	reverse_iterator	rbegin( void );
	reverse_iterator	rend( void );

	const_iterator			begin( void ) const;
	const_iterator	 		end( void ) const;
	const_reverse_iterator	rbegin( void ) const;
	const_reverse_iterator	rend( void ) const;
	
};

template < typename T >
MutantStack<T>::MutantStack( void )
{
	return ;
}

template < typename T >
MutantStack<T>::MutantStack( MutantStack const & src ) : std::stack<T>( src )
{
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
	this->std::stack<T>::operator=(rhs);
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

template < typename T >
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin( void )
{
	return this->c.rbegin();
}

template < typename T >
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend( void )
{
	return this->c.rend();
}
template < typename T >

typename MutantStack<T>::const_iterator	MutantStack<T>::begin( void ) const
{
	return this->c.begin();
}

template < typename T >
typename MutantStack<T>::const_iterator	MutantStack<T>::end( void ) const
{
	return this->c.end();
}

template < typename T >
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin( void ) const
{
	return this->c.rbegin();
}

template < typename T >
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend( void ) const
{
	return this->c.rend();
}
#endif
