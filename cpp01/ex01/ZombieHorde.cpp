/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:52:49 by cjang             #+#    #+#             */
/*   Updated: 2022/02/23 12:32:18 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*		zombie;
	std::string	nameIndex;

	if (N <=0)
	{
		std::cout << "N Must be positive number." << std::endl;
		return (NULL);
	}
	zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].initName(name + std::to_string(i));
	return (zombie);
}
// to_string -> c++11버전이었음..
// <sstream>에서 stringstream을 이용하여 int to string을 하면 됨.
