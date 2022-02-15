/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:23 by cjang             #+#    #+#             */
/*   Updated: 2022/02/15 16:44:01 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor */
Cat::Cat( void )
{
	this->brain = new Brain();
	this->Animal::type = "Cat";
	std::cout << "<Cat default Constructor>" << std::endl;
	return ;
}

Cat::Cat( Cat const & src )
{
	this->brain = new Brain( *src.brain );
	this->Animal::type = src.getType();
	std::cout << "<Cat copy Constructor>" << std::endl;
	return ;
}

/* Destructor */
Cat::~Cat( void )
{
	delete this->brain;
	std::cout << "<Cat string Destructor>" << std::endl;
	return ;
}

/* Assignation Operator Overload */
Cat &	Cat::operator=( Cat const & rhs )
{
	Brain::setBrain( *this->brain, *rhs.brain );
	this->Animal::type = rhs.getType();
	std::cout << "<Cat assignation operator>" << std::endl;
	return *this;
}

/* Member Function */

void		Cat::makeSound( void ) const
{
	std::cout << "meow~!" << std::endl;
	return ;
}
