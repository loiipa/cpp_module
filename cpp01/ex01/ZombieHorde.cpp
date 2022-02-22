/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:52:49 by cjang             #+#    #+#             */
/*   Updated: 2022/02/22 17:47:26 by cjang            ###   ########.fr       */
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

// #inclde sst
// std::string str;
// int number = 100;
// streamstr ssintl;
// ssint << number;
// str = ssint.str();
