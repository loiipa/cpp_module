/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:18:40 by cjang             #+#    #+#             */
/*   Updated: 2022/02/28 13:54:08 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <set>
# include <iterator>
# include <exception>
# include <limits>
# include <algorithm>

class Span
{
public:

	Span( void );
	Span( Span const & src );
	Span( unsigned int const & n );
	~Span( void );

	Span &	operator=( Span const & rhs );

	void		addNumber( int const & i );
	long long	shortestSpan( void );
	long long	longestSpan( void );
	
	template< typename Iter >
	void		addIterNum( Iter const & begin, Iter const & end )
	{
		if (this->_v.capacity() - this->_v.size() < \
			static_cast<size_t>(std::distance(begin, end)))
			throw NotEnoughSpaceException();
		
		for (Iter it = begin; it != end; ++it)
			_v.push_back(*it);

		return ;
	}

	class NotFoundRangeException : public std::exception
	{
		public:
			const char* what( void ) const throw();
	};

	class NotEnoughSpaceException : public std::exception
	{
		public:
			const char* what( void ) const throw();
	};

private:

	std::vector<int>	_v;

};

#endif
