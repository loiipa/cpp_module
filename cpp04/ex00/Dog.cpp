/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:23 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 11:25:52 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor */
Dog::Dog( void )
{
	std::cout << "<Dog default Constructor>" << std::endl;
	this->Animal::type = "Dog";
	return ;
}

Dog::Dog( Dog const & src )
{
	std::cout << "<Dog copy Constructor>" << std::endl;
	this->Animal::type = src.getType();
	return ;
}

/* Destructor */
Dog::~Dog( void )
{
	std::cout << "<Dog Destructor>" << std::endl;
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
