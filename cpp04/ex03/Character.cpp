/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:46:34 by cjang             #+#    #+#             */
/*   Updated: 2022/02/18 17:38:33 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	for (int i = 0; i < this->idx; i++)
		_inventory[i] = NULL;
	return ;
}

Character::Character( std::string const & name ) : _name( name )
{
	for (int i = 0; i < this->idx; i++)
		this->_inventory[i] = NULL;
	return ;
}


Character::Character( Character const & src )
{
	this->_name = src.getName();
	for (int i = 0; i < this->idx; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = src._inventory[i];
	}
	return ;
}

Character::~Character( void )
{
	for (int i = 0; i < this->idx; i++)
	{
		if (this->_inventory[i])
		{
			// std::cout << "Character : delete inventory [" << i << "] "<< this->_inventory[i]->getType() << std::endl;
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	return ;
}

Character &	Character::operator=( Character const & rhs )
{
	this->_name = rhs.getName();
	for (int i = 0; i < this->idx; i++)
		this->_inventory[i] = rhs._inventory[i];
	return *this;
}

std::string const &	Character::getName() const
{
	return this->_name;
}

void	Character::equip( AMateria* m )
{
	if (m == NULL)
	{
		std::cout << "equip : Materia is NULL." << std::endl;
		return ;
	}
	for (int i = 0; i < this->idx; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "equip   [" << i << "] <" << m->getType() << ">" << std::endl;
			return ;
		}
	}
	std::cout << "equip : Inventory is full." << std::endl;
	return ;
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx >= this->idx)
	{
		std::cout << "unequip : Out of inventory index." << std::endl;
		return ;
	}

	if (this->_inventory[idx])
	{
		std::cout << "unequip [" << idx << "] <" << this->_inventory[idx]->getType() << ">" << std::endl;
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "unequip : Not found." << std::endl;
	return ;
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || idx >= this->idx)
	{
		std::cout << "use : Out of inventory index." << std::endl;
		return ;
	}

	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "use : Not found." << std::endl;

	return ;
}
const int Character::idx = 4;
