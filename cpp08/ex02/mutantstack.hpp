/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:00:39 by cjang             #+#    #+#             */
/*   Updated: 2022/03/01 02:11:22 by cjang            ###   ########.fr       */
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


	typedef typename std::stack<T>::container_type::iterator	iterator;
	typename MutantStack<T>::iterator		begin( void );
	typename MutantStack<T>::iterator	 	end( void );

private:

};
# include "mutantstack.cpp"
#endif
