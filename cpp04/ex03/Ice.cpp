/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:26:30 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 23:40:38 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" )
{
	return ;
}

Ice::Ice( Ice const & src ) : AMateria( src.getType() )
{
	return ;
}

Ice::~Ice( void )
{
	return ;
}

Ice &		Ice::operator=( Ice const & rhs )
{
	this->type = rhs.getType();
	return *this;
}
AMateria*	Ice::clone( void ) const
{
	AMateria*	materia = new Ice();
	return materia;
}
void		Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
