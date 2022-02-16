/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:49:47 by cjang             #+#    #+#             */
/*   Updated: 2022/02/16 11:43:15 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"

int	main()
{
	int		N = 10;
	{
		const Animal*	j = new Dog();
		std::cout << std::endl;
		const Animal*	i = new Cat();
		std::cout << std::endl;

		delete i;
		std::cout << std::endl;
		delete j;
		std::cout << std::endl;
	}

	/* Animal 배열 -> Dog 반 Cat 반 */
	Animal*		ani[N];

	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
			ani[i] = new Dog();
		else
			ani[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << std::endl;
	
	ani[0] = ani[2];
	// std::cout << &ani[0] << std::endl;
	// std::cout << &ani[2] << std::endl;

	for (int i = 0; i < N; i++)
	{
		std::cout << ani[i]->getType() << std::endl;
		ani[i]->makeSound();
		std::cout << std::endl;

	}
	std::cout << std::endl;

	for (int i = 0; i < N; i++)
	{
		delete ani[i];
		std::cout << std::endl;
	}
}
/*

dcopy dog
scopy cat
cat -> brain 생성 x 선언만..

*/
