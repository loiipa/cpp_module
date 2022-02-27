/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:34:09 by cjang             #+#    #+#             */
/*   Updated: 2022/02/27 14:11:06 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <string>

#define MAX_VAL 5

int main( void )
{
	Array<int>	 			iArray(MAX_VAL);
	Array<double>	 		dArray(MAX_VAL);
	Array<std::string>	 	sArray(MAX_VAL);
	int						value;

	std::srand(std::time(NULL));


	for (int i = 0; i < MAX_VAL; i++)
	{
		value = std::rand() % 100;
		iArray[i] = value;
		std::cout << iArray[i] << "\t";
	}
	std::cout << std::endl;
	try { std::cout << iArray[MAX_VAL] << std::endl; }
	catch (const std::exception & e) { std::cerr << e.what() << std::endl; }
	std::cout << std::endl;



	for (int i = 0; i < MAX_VAL; i++)
	{
		value = std::rand() % 100;
		dArray[i] = value * 1.23;
		std::cout << dArray[i] << "\t";
	}
	std::cout << std::endl;
	try { std::cout << dArray[MAX_VAL * 2] << std::endl; }
	catch (const std::exception & e) { std::cerr << e.what() << std::endl; }
	std::cout << std::endl;



	for (int i = 0; i < MAX_VAL; i++)
	{
		sArray[i] = "42 Seoul";
		std::cout << sArray[i] << "\t";
	}
	std::cout << std::endl;
	try { std::cout << sArray[-1] << std::endl; }
	catch (const std::exception & e) { std::cerr << e.what() << std::endl; }
	std::cout << std::endl;

	return 0;
}
