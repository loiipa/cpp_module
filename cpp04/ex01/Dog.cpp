/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:23 by cjang             #+#    #+#             */
/*   Updated: 2022/02/15 16:17:53 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor */
Dog::Dog( void )
{
	this->brain = new Brain();
	this->Animal::type = "Dog";
	std::cout << "<Dog default Constructor>" << std::endl;
	return ;
}

Dog::Dog( Dog const & src )
{
	this->brain = new Brain( *src.brain );
	this->Animal::type = src.getType();
	std::cout << "<Dog copy Constructor>" << std::endl;
	return ;
}

/* Destructor */
Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "<Dog string Destructor>" << std::endl;
	return ;
}

/* Assignation Operator Overload */
Dog &	Dog::operator=( Dog const & rhs )
{
	Brain::setBrain( *this->brain, *rhs.brain );
	this->Animal::type = rhs.getType();
	std::cout << "<Dog assignation operator>" << std::endl;
	return *this;
}

/* Member Function */
void		Dog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
	return ;
}
