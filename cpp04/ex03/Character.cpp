/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:46:34 by cjang             #+#    #+#             */
/*   Updated: 2022/02/17 01:44:13 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	return ;
}

Character::Character( std::string const & name ) : _name( name )
{
	return ;
}


Character::Character( Character const & src )
{
	this->_name = src.getName();
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i];
	return ;
}

Character::~Character( void )
{
	return ;
}

Character &	Character::operator=( Character const & rhs )
{
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i];
	return *this;
}

std::string const &	Character::getName() const
{
	return this->_name;
}

void	Character::equip( AMateria* m )
{
	for (int i = 0; i < 4; i++)
	{
		// 이전에 초기화 해야할 듯
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break ;
		}
	}
	return ;
}

void	Character::unequip( int idx )
{
	if (idx < 0 || 3 < idx)
		return ;

	if (this->_inventory[idx])
		this->_inventory[idx] = NULL;
	return ;
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || 3 < idx)
		return ;
		
	this->_inventory[idx]->use(target);
	return ;
}
