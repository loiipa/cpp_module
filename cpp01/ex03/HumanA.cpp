/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:15:11 by cjang             #+#    #+#             */
/*   Updated: 2022/02/01 12:31:10 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(&weapon) {

	return ;
}

HumanA::~HumanA(void) {

	return ;
}

void HumanA::attack(void) {

	std::cout << this->_name <<  " attack! " << this->_weapon->getType() << std::endl;
	return ;
}
