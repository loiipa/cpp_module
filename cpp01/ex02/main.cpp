/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:25:47 by cjang             #+#    #+#             */
/*   Updated: 2022/01/30 17:23:15 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*		zombie = zombieHorde(ZNumber, "ZOMBIEEE");
	
	if (zombie == NULL)
		return (1);
	
	for (int i = 0; i < ZNumber; i++)
		zombie[i].announce();

	delete [] zombie;
	return (0);
}
