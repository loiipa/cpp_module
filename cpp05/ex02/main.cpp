/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:01:16 by cjang             #+#    #+#             */
/*   Updated: 2022/02/21 21:13:24 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	test_case1(void)
{
	// Bureaucrat				cjang("cjang", 150);
	// Bureaucrat				cjang("cjang", 140);
	// Bureaucrat				cjang("cjang", 100);
	Bureaucrat				cjang("cjang", 50);
	// Bureaucrat				cjang("cjang", 30);
	// Bureaucrat				cjang("cjang", 20);
	// Bureaucrat				cjang("cjang", 1);

	Form*	sform = new ShrubberyCreationForm("myhome");	// 145 137
	Form*	rform = new RobotomyRequestForm("claptrap");	// 72 45
	Form*	pform = new PresidentialPardonForm("HongGD");	// 25 5

	cjang.SignForm( *sform );
	cjang.SignForm( *rform );
	cjang.SignForm( *pform );

	std::cout << std::endl;

	cjang.executeForm( *sform );
	cjang.executeForm( *rform );
	cjang.executeForm( *pform );

	delete sform;
	delete rform;
	delete pform;
}

int	main(void)
{
	test_case1();	// sign + execute test

	return 0;
}
