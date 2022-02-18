/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:41:08 by cjang             #+#    #+#             */
/*   Updated: 2022/02/18 17:42:26 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter*	me = new Character("me");

	AMateria*	tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	// std::cout << std::endl;

	// tmp = src->createMateria("fire");
	// me->equip(tmp);
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// std::cout << std::endl;

	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// delete tmp;

	// std::cout << std::endl;

	// me->unequip(0);
	// me->unequip(1);
	// me->unequip(5);

	ICharacter*	bob = new Character("bob");

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	// for (int i = 0; i < 5; i++)
	// 	me->use(i, *bob);

	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}
