/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:49:31 by cjang             #+#    #+#             */
/*   Updated: 2022/02/01 11:30:45 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {

	return ;
}

Weapon::~Weapon(void) {

	return ;
}

std::string const & Weapon::getType(void) {
	
	return this->_type;
}

std::string const & Weapon::setType(std::string type) {

	this->_type = type;
	return this->_type;
	
}
