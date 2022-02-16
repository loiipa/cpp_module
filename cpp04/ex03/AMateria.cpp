/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:19:29 by cjang             #+#    #+#             */
/*   Updated: 2022/02/17 01:41:54 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ) : type( type )
{
	return ;
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
