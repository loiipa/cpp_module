/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:49:37 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 01:05:21 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void )
{
	{
		FragTrap	ft1("roro");
		FragTrap	ft2(ft1);
		FragTrap	ft3("acro");
		FragTrap	ft4;

		std::cout << "ft2: "<< ft2.getName() << std::endl;
		ft4 = ft3;
		std::cout << "ft4: "<< ft4.getName() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	
	{
		FragTrap	ft1("roro");
		FragTrap	ft2("acro");

		std::cout << std::endl;

		for (int i = 0; i < 5; i++)
		{
			ft1.attack( ft2.getName() );
			ft2.takeDamage( ft2.getAttackDamage() );
		}

		std::cout << std::endl;

		ft2.attack( ft1.getName() );
		ft1.takeDamage( ft2.getAttackDamage() );

		std::cout << std::endl;

		ft1.beRepaired( 1 );
		ft2.beRepaired( 1 );

		ft1.highFivesGuys();
		ft2.highFivesGuys();
		std::cout << std::endl;
	}

	return 0;
}
