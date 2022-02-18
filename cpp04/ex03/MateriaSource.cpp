/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:23:29 by cjang             #+#    #+#             */
/*   Updated: 2022/02/18 17:35:54 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < this->idx; i++)
		_inventory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	for (int i = 0; i < this->idx; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = src._inventory[i];
	}
	return ;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < this->idx; i++)
	{
		if (this->_inventory[i])
		{
			// std::cout << "MateriaSource : delete inventory [" << i << "] "<< this->_inventory[i]->getType() << std::endl;
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	return ;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0; i < this->idx; i++)
		this->_inventory[i] = rhs._inventory[i];
	return *this;
}

void		MateriaSource::learnMateria( AMateria* m )
{
	if (m == NULL)
	{
		std::cout << "learnMateria : Materia is NULL." << std::endl;
		return ;
	}

	for (int i = 0; i < this->idx; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "learn   [" << i << "] <"<< m->getType() << ">"<< std::endl;
			return ;
		}
	}
	std::cout << "learnMateria : Inventory is full." << std::endl;
	return ;
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < this->idx; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
		{
			std::cout << "create  [" << i << "] <" << type << ">" << std::endl;
			return this->_inventory[i]->clone();
		}
	}
	std::cout << "createMateria : Not found." << std::endl;
	return 0;
}
const int MateriaSource::idx = 4;

// 소멸자 -> for if 해서 지우기
// 복사생성자 -> 기존 값 delete
