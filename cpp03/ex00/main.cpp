/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:49:37 by cjang             #+#    #+#             */
/*   Updated: 2022/02/11 01:01:57 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	{
		ClapTrap	ct1("roro");
		ClapTrap	ct2(ct1);
		ClapTrap	ct3("acro");
		ClapTrap	ct4;

		std::cout << "ct2: "<< ct2.getName() << std::endl;
		ct4 = ct3;
		std::cout << "ct4: "<< ct4.getName() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	{
		ClapTrap	ct1("roro");
		ClapTrap	ct2("acro");

		std::cout << std::endl;

		ct1.attack( ct2.getName() );
		ct2.takeDamage( ct2.getAttackDamage() );

		std::cout << std::endl;

		ct2.attack( ct1.getName() );
		ct1.takeDamage( ct2.getAttackDamage() );

		std::cout << std::endl;

		ct1.beRepaired( 1 );
		ct2.beRepaired( 1 );

		std::cout << std::endl;
	}
	return 0;
}
