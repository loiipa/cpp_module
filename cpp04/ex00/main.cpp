/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:49:47 by cjang             #+#    #+#             */
/*   Updated: 2022/02/14 16:36:32 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << std::endl;

	const WrongAnimal*	wa = new WrongAnimal();
	const WrongAnimal*	d = new WrongDog();
	const WrongAnimal*	c = new WrongCat();

	std::cout << d->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	d->makeSound();
	c->makeSound();
	wa->makeSound();

	delete wa;
	delete d;
	delete c;
}
