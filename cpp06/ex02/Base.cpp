/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:13:40 by cjang             #+#    #+#             */
/*   Updated: 2022/02/25 06:14:07 by cjang            ###   ########.fr       */
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
			std::cout << "I'm class A" << std::endl;
			return new A();
		case 1:
			std::cout << "I'm class B" << std::endl;
			return new B();
		case 2:
			std::cout << "I'm class C" << std::endl;
			return new C();
	}
	return NULL;
}

void	Base::identify( Base* p )
{
	A*	a;
	B*	b;
	C*	c;

	a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;

	b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "B" << std::endl;

	c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;

	return ;
}

void	Base::identify( Base& p )
{
	try
	{
		A&	a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
		;
	}
	
	try
	{
		B&	b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
		;
	}
	try
	{
		C&	c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
		;
	}
	return ;
}
