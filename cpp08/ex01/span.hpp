/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:18:40 by cjang             #+#    #+#             */
/*   Updated: 2022/02/28 02:36:25 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
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

private:
	std::vector<int>	_v;
};

#endif
