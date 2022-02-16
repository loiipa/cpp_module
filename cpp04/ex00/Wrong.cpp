/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:49:49 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 15:48:55 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

/* Constructor */
WrongAnimal::WrongAnimal( void ) : type( "WrongAnimal" )
{
	std::cout << "<WrongAnimal default Constructor>" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) : type ( src.type )
{
	std::cout << "<WrongAnimal copy Constructor>" << std::endl;
	return ;
}

/* Destructor */
WrongAnimal::~WrongAnimal( void )
{
	std::cout << "<WrongAnimal Destructor>" << std::endl;
	return ;
}

/* Assignation Operator Overload */
WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "<WrongAnimal assignation operator>" << std::endl;
	this->type = rhs.getType();
	return *this;
}

/* Member Function */
std::string		WrongAnimal::getType( void ) const
{
	return this->type;
}

void			WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal!" << std::endl;
	return ;
}

/* Constructor */
WrongCat::WrongCat( void )
{
	this->WrongAnimal::type = "WrongCat";
	std::cout << "<WrongCat default Constructor>" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & src )
{
	this->WrongAnimal::type = src.getType();
	std::cout << "<WrongCat copy Constructor>" << std::endl;
	return ;
}

/* Destructor */
WrongCat::~WrongCat( void )
{
	std::cout << "<WrongCat Destructor>" << std::endl;
	return ;
}

/* Assignation Operator Overload */
WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "<WrongCat assignation operator>" << std::endl;
	this->WrongAnimal::type = rhs.getType();
	return *this;
}

/* Member Function */

void			WrongCat::makeSound( void ) const
{
	std::cout << "meow~!" << std::endl;
	return ;
}


/* Constructor */
WrongDog::WrongDog( void )
{
	this->WrongAnimal::type = "WrongDog";
	std::cout << "<WrongDog default Constructor>" << std::endl;
	return ;
}

WrongDog::WrongDog( WrongDog const & src )
{
	this->WrongAnimal::type = src.getType();
	std::cout << "<WrongDog copy Constructor>" << std::endl;
	return ;
}

/* Destructor */
WrongDog::~WrongDog( void )
{
	std::cout << "<WrongDog Destructor>" << std::endl;
	return ;
}

/* Assignation Operator Overload */
WrongDog &	WrongDog::operator=( WrongDog const & rhs )
{
	std::cout << "<WrongDog assignation operator>" << std::endl;
	this->WrongAnimal::type = rhs.getType();
	return *this;
}

/* Member Function */

void			WrongDog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
	return ;
}
