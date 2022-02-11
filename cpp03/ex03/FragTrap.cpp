/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:49:18 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 18:56:48 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* constructor */
FragTrap::FragTrap( void )
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap <> is created!" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap <" << this->getName() << "> is created!" << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src._name )
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;

	std::cout << "FragTrap <" << this->getName() << "> is copied!" << std::endl;
	return ;
}

/* destructor */
FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap <" << this->getName() << "> is destroyed." << std::endl;
	return ;
}

/* operator */
FragTrap &	FragTrap::operator=( FragTrap const & src )
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;

	std::cout << "FragTrap <" << this->getName() << "> is assigned!" << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	unsigned int	useEnergy = 10;

	if (this->_hitPoints == 0)
	{
		std::cout << "highFivesGuys - FragTrap <" << this->_name << "> already died." << std::endl;
		return ;
	}
	if (this->_energyPoints >= useEnergy)
	{
		std::cout << "v FragTrap <" << this->_name << "> High Fives Guys! v" << std::endl;
		this->_energyPoints -= useEnergy;
	}
	else
		std::cout << "FragTrap <" << this->_name << "> not enough energy" << std::endl;
	std::cout << "FragTrap <" << this->_name << "> EP (" << this->_energyPoints << ")" << std::endl;
	return ;
}
