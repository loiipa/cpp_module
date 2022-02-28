/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:11:33 by cjang             #+#    #+#             */
/*   Updated: 2022/03/01 02:44:12 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int	main(void)
{
	std::vector<int>			v;
	std::vector<int>::iterator	vit;

	for (size_t i = 0; i < 5; i++)
		v.push_back(i);
	try
	{
		std::cout << "<vector>" << std::endl;
		vit = easyfind(v, 2);
		std::cout << "idx\t"<< std::distance(v.begin(), vit) << std::endl;
		std::cout << "value\t" << *vit << "\n" << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::deque<int>				d;
	std::deque<int>::iterator	dit;

	d.push_front(10);
	d.push_front(20);
	d.push_front(30);
	try
	{
		std::cout << "<deque>" << std::endl;
		dit = easyfind(d, 30);
		std::cout << "idx\t"<< std::distance(d.begin(), dit) << std::endl;
		std::cout << "value\t" << *dit << "\n" << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::list<int>				l;
	std::list<int>::iterator	lit;

	l.push_back(40);
	l.push_back(2);
	l.push_back(24);
	try
	{
		std::cout << "<list>" << std::endl;
		lit = easyfind(l, 2);
		std::cout << "dist\t"<< std::distance(l.begin(), lit) << std::endl;
		std::cout << "value\t" << *lit << "\n" << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
