/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:57:46 by cjang             #+#    #+#             */
/*   Updated: 2022/02/01 12:31:19 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {

	_weaponFlag = false;
	return ;
}

HumanB::~HumanB(void) {

	return ;
}

void	HumanB::attack(void) {

	if (this->_weaponFlag)
		std::cout << this->_name << " attack! " << this->_weapon->getType() << std::endl;
	else
		std::cout << "Not have Weapon.." << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon& weapon) {
	
	this->_weapon = &weapon;
	this->_weaponFlag = true;
	return ;
}
