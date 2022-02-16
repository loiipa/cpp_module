/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:23:29 by cjang             #+#    #+#             */
/*   Updated: 2022/02/17 01:43:34 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i];
	return ;
}

MateriaSource::~MateriaSource( void )
{
	return ;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i];
	return *this;
}

void		MateriaSource::learnMateria( AMateria* m )
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


AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < 4; i++)
	{
		// 이전에 초기화 해야할 듯
		if (this->_inventory[i])
		{
			if (this->_inventory[i]->getType() == type)
				return this->_inventory[i];
		}
	}
	return 0;
}
