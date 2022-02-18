/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:49:47 by cjang             #+#    #+#             */
/*   Updated: 2022/02/18 13:34:41 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"

int	main()
{
	/* 과제에 주어진 main */
	{
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		delete i;
		delete j;
	}

	/* Animal 배열 -> Dog 반 Cat 반 */
	{
		int		N = 6;
		Animal*		ani[N];

		for (int i = 0; i < N; i++)
		{
			if (i % 2 == 0)
				ani[i] = new Dog();
			else
				ani[i] = new Cat();
			std::cout << std::endl;
		}

		for (int i = 0; i < N; i++)
		{
			std::cout << ani[i]->getType() << std::endl;
			ani[i]->makeSound();
			std::cout << std::endl;
		}

		for (int i = 0; i < N; i++)
		{
			delete ani[i];
			std::cout << std::endl;
		}
	}
	/* Deep copy */
	{
		Dog		dog1;
		Dog		dog2 = dog1;

		dog1.setBrainIdea(0, "I'm hungry.");
		std::cout << dog1.getBrainIdea(0) << std::endl;
		std::cout << dog2.getBrainIdea(0) << std::endl << std::endl;

		dog2.setBrainIdea(0, "I'm full.");
		std::cout << dog1.getBrainIdea(0) << std::endl;
		std::cout << dog2.getBrainIdea(0) << std::endl << std::endl;
	}
	std::cout << std::endl;

	/* shallow copy */
	/* ! 에러 나는 상황 ! */
	// {
	// 	WrongDog		dog1;
	// 	WrongDog		dog2 = dog1;

	// 	dog1.setBrainIdea(0, "I'm hungry.");
	// 	std::cout << dog1.getBrainIdea(0) << std::endl;
	// 	std::cout << dog2.getBrainIdea(0) << std::endl << std::endl;

	// 	dog2.setBrainIdea(0, "I'm full.");
	// 	std::cout << dog1.getBrainIdea(0) << std::endl;
	// 	std::cout << dog2.getBrainIdea(0) << std::endl << std::endl;
	// }
	return 0;
}
