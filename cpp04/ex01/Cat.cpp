/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:23 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 11:48:02 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor */
Cat::Cat( void )
{
	std::cout << "<Cat default Constructor>" << std::endl;
	this->brain = new Brain();
	this->Animal::type = "Cat";
	return ;
}

Cat::Cat( Cat const & src )
{
	std::cout << "<Cat copy Constructor>" << std::endl;
	this->brain = new Brain( *src.brain );
	this->Animal::type = src.getType();
	return ;
}

/* Destructor */
Cat::~Cat( void )
{
	std::cout << "<Cat Destructor>" << std::endl;
	delete this->brain;
	return ;
}

/* Assignation Operator Overload */
Cat &	Cat::operator=( Cat const & rhs )
{
	std::cout << "<Cat assignation operator>" << std::endl;
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = rhs.brain->ideas[i];
	this->Animal::type = rhs.getType();
	return *this;
}

/* Member Function */

void		Cat::makeSound( void ) const
{
	std::cout << "meow~!" << std::endl;
	return ;
}
