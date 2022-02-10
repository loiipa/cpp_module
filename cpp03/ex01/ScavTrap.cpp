/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:10:39 by cjang             #+#    #+#             */
/*   Updated: 2022/02/10 21:57:09 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* constructor */
ScavTrap::ScavTrap( void )
{
	this->_hitPoints = 100;
	this->_energyPoints = 30;
	this->_attackDamage = 30;
	std::cout << "ScavTrap <> is created!" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "ScavTrap <" << this->getName() << "> is created!" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	std::cout << "ScavTrap <" << this->getName() << "> is copied!" << std::endl;
	*this = src;
	return ;
}

/* destructor */
ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap <" << this->getName() << "> is destroyed." << std::endl;
	return ;
}

/* operator */
ScavTrap &	ScavTrap::operator=( ScavTrap const & src )
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;

	std::cout << "ScavTrap <" << this->getName() << "> is assigned!" << std::endl;
	return *this;
}

void	ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap <" << this->_name << "> attack <" << target << ">, ";
	std::cout << "causing (" << this->_attackDamage << ") points of damage!" << std::endl;
	return ;
}

void	ScavTrap::highFivesGuys( void )
{

	return ;
}
