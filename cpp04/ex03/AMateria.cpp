/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:19:29 by cjang             #+#    #+#             */
/*   Updated: 2022/02/18 15:57:41 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
	return ;
}

AMateria::AMateria( std::string const & type ) : type( type )
{
	return ;
}

AMateria::AMateria( AMateria const & src ) : type( src.type )
{
	return ;
}

AMateria::~AMateria( void )
{
	return ;
}

AMateria &	AMateria::operator=( AMateria const & rhs )
{
	this->type = rhs.getType();
	return *this;
}

std::string const & AMateria::getType( void ) const
{
	return this->type;
}

void		AMateria::use( ICharacter & target )
{
	std::cout << "*" << target.getName() << "*" <<std::endl;
	return ;
}
