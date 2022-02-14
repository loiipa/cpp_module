/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:49:49 by cjang             #+#    #+#             */
/*   Updated: 2022/02/14 15:22:42 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Constructor */
Animal::Animal( void ) : type( "Animal" )
{
	std::cout << "<Animal default Constructor>" << std::endl;
	return ;
}

Animal::Animal( Animal const & src ) : type ( src.type )
{
	std::cout << "<Animal copy Constructor>" << std::endl;
	return ;
}

/* Destructor */
Animal::~Animal( void )
{
	std::cout << "<Animal string Destructor>" << std::endl;
	return ;
}

/* Assignation Operator Overload */
Animal &	Animal::operator=( Animal const & rhs )
{
	std::cout << "<Animal assignation operator>" << std::endl;
	this->type = rhs.getType();
	return *this;
}

/* Member Function */
std::string		Animal::getType( void ) const
{
	return this->type;
}

void			Animal::makeSound( void ) const
{
	std::cout << "Animal!" << std::endl;
	return ;
}
