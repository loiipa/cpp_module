/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:01:16 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 15:51:41 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	test_case1(void)
{
	std::cout << "==========      constructor test      ==========\n" << std::endl;
	
	try
	{
		Bureaucrat	kim1("kim1", 0);
		std::cout << kim1 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "** kim1 - error **" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat	kim2("kim2", 100);
		std::cout << kim2 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "** kim2 - error **" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat	kim3("kim3", 200);
		std::cout << kim3 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "** kim3 - error **" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
}

void	test_case2(void)
{
	std::cout << "==========    member function test    ==========\n" << std::endl;

	Bureaucrat	lee1("lee1", 5);
	Bureaucrat	lee2("lee2", 145);

	try
	{
		while (1)
		{
			lee1.incrementGrade();
			std::cout << lee1 << std::endl;
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		while (1)
		{
			lee2.decrementGrade();
			std::cout << lee2 << std::endl;
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << lee1 << std::endl;
	std::cout << lee2 << std::endl;

	std::cout << "\n================================================\n" << std::endl;
}

int	main(void)
{
	test_case1(); // ????????? ?????????
	test_case2(); // ???????????? ?????????

	return 0;
}

