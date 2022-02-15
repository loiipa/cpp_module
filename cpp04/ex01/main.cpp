/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:49:47 by cjang             #+#    #+#             */
/*   Updated: 2022/02/15 17:05:41 by cjang            ###   ########.fr       */
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
		const Animal*	i = new Cat();

		delete i;
		delete j;
	}

	/* Animal 배열 -> Dog 반 Cat 반 */
	Animal*		ani[N];

	for (int i = 0; i < N/2; i++)
		ani[i] = new Dog();
	for (int i = N/2; i < N; i++)
		ani[i] = new Cat();

	std::cout << std::endl << std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout << ani[i]->getType() << std::endl;

	}

	// ani[0]->

	for (int i = 0; i < N; i++)
		delete ani[i];
}
/*

dcopy dog
scopy cat
cat -> brain 생성 x 선언만..

*/
