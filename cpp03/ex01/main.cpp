/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:49:37 by cjang             #+#    #+#             */
/*   Updated: 2022/02/10 21:55:29 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	ct1("roro");
	ScavTrap	ct2;
	ScavTrap	ct3("acro");

	ct2 = ct3;

	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		ct1.attack( ct2.getName() );
		ct2.takeDamage( ct2.getAttackDamage() );
	}

	std::cout << std::endl;

	ct2.attack( ct1.getName() );
	ct1.takeDamage( ct2.getAttackDamage() );

	std::cout << std::endl;

	ct1.beRepaired( 1 );
	ct2.beRepaired( 1 );

	std::cout << std::endl;

	return 0;
}
