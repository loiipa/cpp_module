/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:01:16 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 20:41:27 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test_case1(void)
{
	std::cout << "==========      constructor test      ==========\n" << std::endl;
	
	try
	{
		Form		form1("form1", 0, 100);
		std::cout << form1 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "** form1 - error **" << std::endl;
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form		form2("form2", 100, 100);
		std::cout << form2 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "** form2 - error **" << std::endl;
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form		form3("form3", 100, 200);
		std::cout << form3 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "** form3 - error **" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
}

void	test_case2(void)
{
	std::cout << "==========         sign test          ==========\n" << std::endl;

	Bureaucrat	lee1("lee1", 20);
	Bureaucrat	lee2("lee2", 100);

	Form		form1("form1", 10, 50);
	Form		form2("form2", 30, 50);
	Form		form3("form3", 120, 140);

	lee1.SignForm( form1 );
	lee2.SignForm( form1 );

	lee1.SignForm( form2 );
	lee2.SignForm( form2 );
	
	lee1.SignForm( form3 );
	lee2.SignForm( form3 );

	std::cout << "\n================================================\n" << std::endl;
}

int	main(void)
{
	test_case1(); // 생성자 테스트
	test_case2(); // sign 테스트

	return 0;
}
