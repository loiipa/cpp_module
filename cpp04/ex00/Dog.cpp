/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:23 by cjang             #+#    #+#             */
/*   Updated: 2022/02/14 16:01:09 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor */
Dog::Dog( void )
{
	this->Animal::type = "Dog";
	std::cout << "<Dog default Constructor>" << std::endl;
	return ;
}

Dog::Dog( Dog const & src )
{
	this->Animal::type = src.getType();
	std::cout << "<Dog copy Constructor>" << std::endl;
	return ;
}

/* Destructor */
Dog::~Dog( void )
{
	std::cout << "<Dog string Destructor>" << std::endl;
	return ;
}

/* Assignation Operator Overload */
Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "<Dog assignation operator>" << std::endl;
	this->Animal::type = rhs.getType();
	return *this;
}

/* Member Function */

void			Dog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
	return ;
}
