/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:00:39 by cjang             #+#    #+#             */
/*   Updated: 2022/02/28 19:17:37 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{
public:

	MutantStack( void );
	MutantStack( MutantStack const & src );
	~MutantStack( void );


	MutantStack<T> &	operator=( MutantStack const & rhs );


	typedef typename std::stack<T>::container_type::iterator	iterator;
	void		begin( void ) const;
	// typename std::stack<T>::container_type::iterator 	end( void ) const;

private:

};
# include "mutantstack.cpp"
#endif
