/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:13:51 by cjang             #+#    #+#             */
/*   Updated: 2022/02/10 01:21:18 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 10 ) {
	
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 10 ) {

	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) : _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 10 ) {

	*this = src;
	return ;
}

ClapTrap::~ClapTrap( void ) {

	return ;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & src ) {
	
	this->
}
