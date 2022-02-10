/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:09:05 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 01:34:33 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* constructor */
DiamondTrap::DiamondTrap( void )
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	
	std::cout << "DiamondTrap <> is created!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name ), FragTrap( name ), ScavTrap( name )
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap <" << this->getName() << "> is created!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap( src ), FragTrap( src ), ScavTrap( src )
{
	std::cout << "DiamondTrap <" << this->getName() << "> is copied!" << std::endl;
	return ;
}

/* destructor */
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap <" << this->getName() << "> is destroyed." << std::endl;
	return ;
}

/* operator */
DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & src )
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;

	std::cout << "DiamondTrap <" << this->getName() << "> is assigned!" << std::endl;
	return *this;
}
