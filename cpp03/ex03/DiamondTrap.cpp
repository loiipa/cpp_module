/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:09:05 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 14:52:47 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* constructor */
DiamondTrap::DiamondTrap( void )
{
	this->DiamondTrap::_name = "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	
	std::cout << "DiamondTrap <" << this->_name << "> is created!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name ), FragTrap( name ), ScavTrap( name )
{
	this->DiamondTrap::_name = name + "_clap_name";

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;

	std::cout << "DiamondTrap <" << this->_name << "> is created!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap( src ), FragTrap( src ), ScavTrap( src )
{
	this->DiamondTrap::_name = src.DiamondTrap::_name;
	std::cout << "DiamondTrap <" << this->_name << "> is copied!" << std::endl;
	return ;
}

/* destructor */
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap <" << this->_name << "> is destroyed." << std::endl;
	return ;
}

/* operator */
DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & src )
{
	this->DiamondTrap::_name = src.DiamondTrap::_name;
	this->ClapTrap::_name = src.ClapTrap::_name;
	
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;

	std::cout << "DiamondTrap <" << this->_name << "> is assigned!" << std::endl;
	return *this;
}

/* member function */
void	DiamondTrap::whoAmI( void )
{
	std::cout << "DT name? <" << this->DiamondTrap::_name << ">" << std::endl;
	std::cout << "CT name? <" << this->ClapTrap::_name << ">" << std::endl;
	return ;
}
void	DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack( target );
	return ;
}
// using -- attack
