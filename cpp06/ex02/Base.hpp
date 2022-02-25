/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:13:46 by cjang             #+#    #+#             */
/*   Updated: 2022/02/25 11:40:04 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <cstdlib>
# include <ctime>

class Base
{
public:
	virtual ~Base( void );
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *	generate( void );
void	identify( Base* p );
void	identify( Base& p );

#endif
