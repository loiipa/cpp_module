/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:18:35 by cjang             #+#    #+#             */
/*   Updated: 2022/02/28 13:43:26 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void )
{
	this->_v.reserve(0);
	return ;
}

Span::Span( Span const & src ) : _v( src._v )
{
	return ;
}

Span::Span( unsigned int const & n )
{
	this->_v.reserve(n);
	return ;
}

Span::~Span( void )
{
	return ;
}

Span &	Span::operator=( Span const & rhs )
{
	this->_v = rhs._v;
	return *this;
}


void	Span::addNumber( int const & i )
{
	if (this->_v.size() == this->_v.capacity())
		throw NotEnoughSpaceException();
	
	this->_v.push_back(i);
	return ;
}

long long	Span::shortestSpan( void )
{
	std::set<long long>		s;
	std::vector<int>::iterator	it;
	
	if (this->_v.size() < 2)
		throw NotFoundRangeException();
	
	std::sort(this->_v.begin(), this->_v.end());
	it = this->_v.begin();

	while ( it != (_v.end() - 1) )
	{
		s.insert(*(it+1) - *it);
		++it;
	}
	
	return *s.begin();
}

long long	Span::longestSpan( void )
{
	if (this->_v.size() < 2)
		throw NotFoundRangeException();
		
	std::sort(this->_v.begin(), this->_v.end());

	return this->_v.back() - this->_v.front();
}

const char*  Span::NotFoundRangeException::what( void ) const throw()
{
	return "Not Found Range";
}

const char*  Span::NotEnoughSpaceException::what( void ) const throw()
{
	return "Not Enough Space";
}
