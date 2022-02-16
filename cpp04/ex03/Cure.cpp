/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:26:30 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 23:40:51 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" )
{
	return ;
}

Cure::Cure( Cure const & src ) : AMateria( src.getType() )
{
	return ;
}

Cure::~Cure( void )
{
	return ;
}

Cure &		Cure::operator=( Cure const & rhs )
{
	this->type = rhs.getType();
	return *this;
}
AMateria*	Cure::clone( void ) const
{
	AMateria*	materia = new Cure();
	return materia;
}
void		Cure::use( ICharacter & target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return ;
}
