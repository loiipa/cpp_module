/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:09:05 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 19:00:45 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* constructor */
DiamondTrap::DiamondTrap( void ) : ClapTrap( "_clap_name" )
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;

	std::cout << "DiamondTrap <" << this->DiamondTrap::getName() << "> is created!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" )
{
	this->DiamondTrap::_name = name;

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;

	std::cout << "DiamondTrap <" << this->DiamondTrap::getName() << "> is created!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap( src.ClapTrap::_name )
{
	this->DiamondTrap::_name = src.DiamondTrap::_name;

	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;

	std::cout << "DiamondTrap <" << this->DiamondTrap::getName() << "> is copied!" << std::endl;
	return ;
}

/* destructor */
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap <" << this->DiamondTrap::getName() << "> is destroyed." << std::endl;
	return ;
}

/* operator */
DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & src )
{
	this->DiamondTrap::_name = src.DiamondTrap::_name;
	this->ClapTrap::_name = src.ClapTrap::_name;

	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;

	std::cout << "DiamondTrap <" << this->DiamondTrap::getName() << "> is assigned!" << std::endl;
	return *this;
}

/* member function */
void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name? <" << this->DiamondTrap::_name << ">" << std::endl;
	std::cout << "ClapTrap    name? <" << this->ClapTrap::_name << ">" << std::endl;
	return ;
}

void	DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack( target );
	return ;
}

std::string	DiamondTrap::getName( void ) const
{
	return this->DiamondTrap::_name;
}
