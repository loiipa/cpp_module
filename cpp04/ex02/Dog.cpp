/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:23 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 16:30:14 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor */
Dog::Dog( void )
{
	std::cout << "<Dog default Constructor>" << std::endl;
	this->brain = new Brain();
	this->Animal::type = "Dog";
	return ;
}

Dog::Dog( Dog const & src )
{
	std::cout << "<Dog copy Constructor>" << std::endl;
	this->brain = new Brain( *src.brain );
	this->Animal::type = src.getType();
	return ;
}

/* Destructor */
Dog::~Dog( void )
{
	std::cout << "<Dog Destructor>" << std::endl;
	delete this->brain;
	return ;
}

/* Assignation Operator Overload */
Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "<Dog assignation operator>" << std::endl;
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = rhs.brain->ideas[i];
	this->Animal::type = rhs.getType();
	return *this;
}

/* Member Function */
void		Dog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
	return ;
}

Brain*		Dog::getBrain( void ) const
{
	return this->brain;
}

std::string	Dog::getBrainIdea( int const & idx ) const
{
	return this->brain->getIdea( idx );
}


void		Dog::setBrainIdea( int const & idx, std::string const & raw )
{
	this->brain->setIdea( idx, raw );
	return ;
}
