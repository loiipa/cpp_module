/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:49:49 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 16:46:57 by cjang            ###   ########.fr       */
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
	std::cout << "<WrongCat default Constructor>" << std::endl;
	this->brain = new Brain();
	this->WrongAnimal::type = "WrongCat";
	return ;
}

WrongCat::WrongCat( WrongCat const & src )
{
	std::cout << "<WrongCat copy Constructor>" << std::endl;
	this->brain = src.getBrain();
	this->WrongAnimal::type = src.getType();
	return ;
}

/* Destructor */
WrongCat::~WrongCat( void )
{
	std::cout << "<WrongCat Destructor>" << std::endl;
	if (this->brain)
		delete this->brain;
	this->brain = NULL;
	return ;
}

/* Assignation Operator Overload */
WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "<WrongCat assignation operator>" << std::endl;
	this->brain = rhs.getBrain();
	this->WrongAnimal::type = rhs.getType();
	return *this;
}

/* Member Function */

void			WrongCat::makeSound( void ) const
{
	std::cout << "meow~!" << std::endl;
	return ;
}

Brain*		WrongCat::getBrain( void ) const
{
	return this->brain;
}

std::string	WrongCat::getBrainIdea( int const & idx ) const
{
	return this->brain->getIdea( idx );
}


void		WrongCat::setBrainIdea( int const & idx, std::string const & raw )
{
	this->brain->setIdea( idx, raw );
	return ;
}


/* Constructor */
WrongDog::WrongDog( void )
{
	std::cout << "<WrongDog default Constructor>" << std::endl;
	this->brain = new Brain();
	this->WrongAnimal::type = "WrongDog";
	return ;
}

WrongDog::WrongDog( WrongDog const & src )
{
	std::cout << "<WrongDog copy Constructor>" << std::endl;
	this->brain = src.getBrain();
	this->WrongAnimal::type = src.getType();
	return ;
}

/* Destructor */
WrongDog::~WrongDog( void )
{
	std::cout << "<WrongDog Destructor>" << std::endl;
	if (this->brain)
		delete this->brain;
	this->brain = NULL;
	return ;
}

/* Assignation Operator Overload */
WrongDog &	WrongDog::operator=( WrongDog const & rhs )
{
	std::cout << "<WrongDog assignation operator>" << std::endl;
	this->brain = rhs.getBrain();
	this->WrongAnimal::type = rhs.getType();
	return *this;
}

/* Member Function */

void			WrongDog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
	return ;
}
Brain*		WrongDog::getBrain( void ) const
{
	return this->brain;
}

std::string	WrongDog::getBrainIdea( int const & idx ) const
{
	return this->brain->getIdea( idx );
}


void		WrongDog::setBrainIdea( int const & idx, std::string const & raw )
{
	this->brain->setIdea( idx, raw );
	return ;
}
