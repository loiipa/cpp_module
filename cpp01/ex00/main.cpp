/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:25:47 by cjang             #+#    #+#             */
/*   Updated: 2022/01/30 16:39:21 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*		zombie1 = newZombie("zombie_heap<1>");
	Zombie		zombie2("zombie_stack<2>");
	randomChump("zombie_in_cage<3>");
	
	zombie1->announce();
	zombie2.announce();
	delete zombie1;
	
	return (0);
}
