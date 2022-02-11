/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:49:37 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 14:56:01 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	{
		DiamondTrap	dt1("roro");
		DiamondTrap	dt2(dt1);
		DiamondTrap	dt3("acro");
		DiamondTrap	dt4;

		std::cout << "dt2: ";
		dt2.whoAmI();
		std::cout << std::endl;
		dt4 = dt3;
		std::cout << "dt4: ";
		dt4.whoAmI();
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	
	{
		DiamondTrap	dt1("roro");
		DiamondTrap	dt2("acro");

		std::cout << std::endl;

		for (int i = 0; i < 5; i++)
		{
			dt1.attack( dt2.getName() );
			dt2.takeDamage( dt2.getAttackDamage() );
		}

		std::cout << std::endl;

		dt2.attack( dt1.getName() );
		dt1.takeDamage( dt2.getAttackDamage() );

		std::cout << std::endl;

		dt1.beRepaired( 1 );
		dt2.beRepaired( 1 );

		std::cout << std::endl;

		dt1.highFivesGuys();
		dt2.highFivesGuys();

		std::cout << std::endl;

		dt1.guardGate();
		dt2.guardGate();

		std::cout << std::endl;

		dt1.whoAmI();
		dt2.whoAmI();

		std::cout << std::endl;
	}

	return 0;
}
