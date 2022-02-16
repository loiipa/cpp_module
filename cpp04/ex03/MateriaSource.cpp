/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:23:29 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 21:29:42 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	return ;
}

MateriaSource::~MateriaSource( void )
{
	return ;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	return *this;
}

void		learnMateria( AMateria* )
{

}


AMateria*	createMateria( std::string const & type )
{

}
