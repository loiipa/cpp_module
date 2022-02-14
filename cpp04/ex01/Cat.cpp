/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:23 by cjang             #+#    #+#             */
/*   Updated: 2022/02/14 16:00:36 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor */
Cat::Cat( void )
{
	this->Animal::type = "cat";
	std::cout << "<Cat default Constructor>" << std::endl;
	return ;
}

Cat::Cat( Cat const & src )
{
	this->Animal::type = src.getType();
	std::cout << "<Cat copy Constructor>" << std::endl;
	return ;
}

/* Destructor */
Cat::~Cat( void )
{
	std::cout << "<Cat string Destructor>" << std::endl;
	return ;
}

/* Assignation Operator Overload */
Cat &	Cat::operator=( Cat const & rhs )
{
	std::cout << "<Cat assignation operator>" << std::endl;
	this->Animal::type = rhs.getType();
	return *this;
}

/* Member Function */

void			Cat::makeSound( void ) const
{
	std::cout << "meow~!" << std::endl;
	return ;
}
