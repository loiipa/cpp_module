/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:18:35 by cjang             #+#    #+#             */
/*   Updated: 2022/02/28 02:39:49 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void )
{
	this->_v.reserve(0);
	return ;
}

Span::Span( Span const & src )
{
	this->_v = src._v;
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
	{
		std::cout << "exception" << std::endl;
		return ;
	}
	
	this->_v.push_back(i);
	return ;
}

long long	Span::shortestSpan( void )
{
	std::vector<long long>		v;
	std::vector<int>::iterator	it;
	
	if (this->_v.size() < 2)
	{
		std::cout << "exception" << std::endl;
		return -1;
	}
	
	std::sort(this->_v.begin(), this->_v.end());
	it = this->_v.begin();

	while ( it != (_v.end() - 1) )
	{
		v.push_back(*(it+1) - *it);
		++it;
	}
	std::sort(v.begin(), v.end());
	
	return v.front();
}

long long	Span::longestSpan( void )
{
	if (this->_v.size() < 2)
	{
		std::cout << "exception" << std::endl;
		return -1;
	}
	std::sort(this->_v.begin(), this->_v.end());

	return this->_v.back() - this->_v.front();
}
