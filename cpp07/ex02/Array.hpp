/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:34:36 by cjang             #+#    #+#             */
/*   Updated: 2022/02/26 21:59:38 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template< typename T >
class Array
{
private:

	T*				_arr;
	unsigned int	_arrLen;

public:

	Array( void ) : _arrLen( 0 )
	{
		this->_arr = new T[0];
		return ;
	}

	Array( unsigned int n ) : _arrLen( n )
	{
		this->_arr = new T[n];
		return ;
	}

	Array( Array const & src ) : _arrLen( src._arrLen )
	{
		this->_arr = new T[src._arrLen];

		for (unsigned int i = 0; i < this->_arrLen; i++)
			this->_arr[i] = src._arr[i];

		return ;
	}

	~Array( void )
	{
		delete [] _arr;
		return ;
	}

	Array &	operator=( Array const & rhs )
	{
		delete this->_arr;
		this->_arr = new T[rhs._arrLen];
		this->_arrLen = rhs._arrLen;

		for (unsigned int i = 0; i < this->_arrLen; i++)
			this->_arr[i] = rhs._arr[i];

		return *this;
	}

	T &		operator[]( long long const & idx )
	{
		if ( idx < 0 || idx >= _arrLen )
			throw std::exception();
		return _arr[idx];
	}

	const T &		operator[]( long long const & idx ) const
	{
		if ( idx < 0 || idx >= _arrLen )
			throw std::exception();
		return _arr[idx];
	}

	unsigned int	getArrLen( void ) const
	{
		return this->_arrLen;
	}
};

#endif
