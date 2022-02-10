/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:49:37 by cjang             #+#    #+#             */
/*   Updated: 2022/02/10 17:29:00 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	ct1("roro");
	ClapTrap	ct2;
	ClapTrap	ct3("acro");

	ct2 = ct3;

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

	return 0;
}
