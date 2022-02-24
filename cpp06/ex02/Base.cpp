/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:13:40 by cjang             #+#    #+#             */
/*   Updated: 2022/02/24 17:54:29 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base( void )
{
	return ;
}

Base *	Base::generate( void )
{
	int		idx;
	
	std::srand(std::time(NULL));
	idx = std::rand() % 3;

	switch (idx)
	{
		case 0:
			std::cout << "A" << std::endl;
			return new A();
		case 1:
			std::cout << "B" << std::endl;
			return new B();
		case 2:
			std::cout << "C" << std::endl;
			return new C();
	}
	return NULL;
}

void	Base::identify( Base* p )
{
	A*	a;
	// B*	b;
	// C*	c;

	try
	{
		a = dynamic_cast<A*>(p);
		std::cout << "a" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return ;
}

void	Base::identify( Base& p )
{
	(void) p;
	return ;
}
