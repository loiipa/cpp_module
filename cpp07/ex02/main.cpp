/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:34:09 by cjang             #+#    #+#             */
/*   Updated: 2022/02/26 21:59:50 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
#define CJANG_VAL 5

void	copyConTest(Array<int> const & arr)
{
	Array<int>	testArr(arr);
	unsigned int	idx = testArr.getArrLen();
	int				value;

	/* 복사 생성자 테스트 */
	std::cout << "arr\tcpy\t(copy)" << std::endl;
	for (unsigned int i = 0; i < idx; i++)
		std::cout << arr[i] << "\t" << testArr[i] <<std::endl;

	std::cout << std::endl;


	/* 깊은 복사 테스트 */
	std::cout << "arr\tcpy\t(deep copy)" << std::endl;
	for (unsigned int i = 0; i < CJANG_VAL; i++)
	{
		value = rand() % 100;
		testArr[i] = value;
		std::cout << arr[i] << "\t" << testArr[i] <<std::endl;
	}
	std::cout << std::endl;
}

void	assignmentTest(Array<int> const & arr)
{
	Array<int>	testArr;
	testArr = arr;
	unsigned int	idx = testArr.getArrLen();
	int				value;

	/* 할당 연산자 테스트 */
	std::cout << "arr\tassign\t(assign)" << std::endl;
	for (unsigned int i = 0; i < idx; i++)
		std::cout << arr[i] << "\t" << testArr[i] <<std::endl;

	std::cout << std::endl;

	/* 깊은 복사 테스트 */
	std::cout << "arr\tassign\t(deep copy)" << std::endl;
	for (unsigned int i = 0; i < CJANG_VAL; i++)
	{
		value = rand() % 100;
		testArr[i] = value;
		std::cout << arr[i] << "\t" << testArr[i] <<std::endl;
	}
	std::cout << std::endl;
	return ;
}

int main( void )
{
	// int *	a = new int();
	// std::cout << *a << std::endl;

	Array<int>	 array(CJANG_VAL);
	int			value;

	srand(time(NULL));


	for (int i = 0; i < CJANG_VAL; i++)
		std::cout << array[i] << std::endl;

	for (int i = 0; i < CJANG_VAL; i++)
	{
		value = rand() % 100;
		array[i] = value;
		std::cout << array[i] << std::endl;
	}
	std::cout << std::endl;

	/* 할당 연산자 테스트 */
	assignmentTest(array);

	/* 복사 생성자 테스트 */
	copyConTest(array);

	Array<int>	array3;
	try { std::cout << array3[0] << std::endl; }
	catch (const std::exception & e) { std::cerr << e.what() << std::endl; }

	Array<int> const	array222(array);
	Array<int>	arr(array222);

	array222[1] = 10;
	std::cout << arr[1] << std::endl;


	return 0;
}
