/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:49:37 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 01:05:25 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	{
		ScavTrap	st1("roro");
		ScavTrap	st2(st1);
		ScavTrap	st3("acro");
		ScavTrap	st4;

		std::cout << "st2: "<< st2.getName() << std::endl;
		st4 = st3;
		std::cout << "st4: "<< st4.getName() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	
	{
		ScavTrap	st1("roro");
		ScavTrap	st2("acro");

		std::cout << std::endl;

		for (int i = 0; i < 6; i++)
		{
			st1.attack( st2.getName() );
			st2.takeDamage( st2.getAttackDamage() );
		}

		std::cout << std::endl;

		st2.attack( st1.getName() );
		st1.takeDamage( st2.getAttackDamage() );

		std::cout << std::endl;

		st1.beRepaired( 1 );
		st2.beRepaired( 1 );

		st1.guardGate();
		st2.guardGate();
		std::cout << std::endl;
	}

	return 0;
}
