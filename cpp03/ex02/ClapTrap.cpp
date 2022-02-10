/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:13:51 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 01:37:18 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* constructor */
ClapTrap::ClapTrap( void ) : _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "ClapTrap <> is created!" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "ClapTrap <" << this->_name << "> is created!" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
: _name( src._name ), _hitPoints( src._hitPoints ), _energyPoints( src._energyPoints ), _attackDamage( src._attackDamage )
{
	std::cout << "ClapTrap <" << this->_name << "> is copied!" << std::endl;
	return ;
}

/* destructor */
ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap <" << this->_name << "> is destroyed." << std::endl;
	return ;
}

/* operator */
ClapTrap &	ClapTrap::operator=( ClapTrap const & src )
{
	this->_name = src._name;
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;

	std::cout << "ClapTrap <" << this->_name << "> is assigned!" << std::endl;
	return *this;
}

/* member function */
void	ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap <" << this->_name << "> attack <" << target << ">, ";
	std::cout << "causing (" << this->_attackDamage << ") points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap <" << this->_name << "> already died." << std::endl;
		return ;
	}
	else if (this->_hitPoints > amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;

	std::cout << "ClapTrap <" << this->_name << "> HP (" << this->_hitPoints << ")" << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap <" << this->_name << "> died." << std::endl;

	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints == 0)
		std::cout << "beRepaired - ClapTrap <" << this->_name << "> already died." << std::endl;
	else
	{
		this->_hitPoints += amount;
		std::cout << "ClapTrap <" << this->_name << "> is repaired (" << amount << ")" << std::endl;
	}
	std::cout << "ClapTrap <" << this->_name << "> HP (" << this->_hitPoints << ")" << std::endl;
	return ;
}

std::string	ClapTrap::getName( void ) const
{
	return this->_name;
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return this->_attackDamage;
}
