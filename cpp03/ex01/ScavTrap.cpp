/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:10:39 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 17:37:24 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* constructor */
ScavTrap::ScavTrap( void )
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap <> is created!" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap <" << this->getName() << "> is created!" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src._name )
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;

	std::cout << "ScavTrap <" << this->getName() << "> is copied!" << std::endl;
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

void	ScavTrap::guardGate( void )
{
	unsigned int	useEnergy = 10;

	if (this->_hitPoints == 0)
	{
		std::cout << "guardGate - ScavTrap <" << this->_name << "> already died." << std::endl;
		return ;
	}
	if (this->_energyPoints >= useEnergy)
	{
		std::cout << "[ ScavTrap <" << this->_name << "> Guard Gate! ]" << std::endl;
		this->_energyPoints -= useEnergy;
	}
	else
		std::cout << "ScavTrap <" << this->_name << "> not enough energy" << std::endl;
	std::cout << "ScavTrap <" << this->_name << "> EP (" << this->_energyPoints << ")" << std::endl;
	return ;
}
