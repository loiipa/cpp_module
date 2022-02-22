/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:01:16 by cjang             #+#    #+#             */
/*   Updated: 2022/02/22 14:16:49 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

void	test_case1(void)
{
	Intern	cja;
	Intern	cjang;

	try
	{
		Form* form = cja.makeForm("Give me the 42money!", "42money");
		std::cout << *form << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form* form = cjang.makeForm("robotomy request", "claptrap");
		std::cout << *form << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	test_case1(); //인턴 둘이 각각 맞는,틀린 form인 경우

	return 0;
}
