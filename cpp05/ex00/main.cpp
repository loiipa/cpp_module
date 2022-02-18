/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:18:01 by cjang             #+#    #+#             */
/*   Updated: 2022/02/18 19:01:29 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat		cjang("cjang", 30);

		while (cjang.getGrade() != 0)
		{
			cjang.incrementGrade();
			std::cout << cjang << std::endl;
		}
		std::cout << "nothing" << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "fin" << std::endl;
	return 0;
}
