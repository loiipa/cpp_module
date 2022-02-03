/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:39:13 by cjang             #+#    #+#             */
/*   Updated: 2022/01/30 15:59:21 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : _zombieName("zombiee") {

	return ;
	
}

Zombie::Zombie(std::string name) : _zombieName(name) {

	return ;
	
}

Zombie::~Zombie() {

	std::string		zombieScript;

	zombieScript = "Grrrrrrr......__";
	std::cout << "[" << this->_zombieName << "] " << zombieScript << std::endl;
	return ;

}

void	Zombie::announce( void ) const {

	std::string		zombieScript;

	zombieScript = "BraiiiiiiinnnzzzZ";
	std::cout << "[" << this->_zombieName << "] " << zombieScript << std::endl;

	return ;
	
}
