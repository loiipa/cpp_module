/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:35:19 by cjang             #+#    #+#             */
/*   Updated: 2022/02/23 16:54:52 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>		//std::locale, std::isprint

int	main(int argc, char *argv[])
{
	std::string s;
	char		c;
	int			i;
	float		f;
	double		d;

	if (argc != 2)
	{
		std::cout << "Invalid number of arguments." << std::endl;
		return 0;
	}

	s = static_cast<std::string>(argv[1]);

	try
	{
		i = std::stoi(s);
		c = std::stoi(s);
		if (std::isprint(c))
			std::cout << "char\t" << "'" << c << "'" << std::endl;
		else
			std::cout << "char\tNon displayable" << std::endl;
		std::cout << "int\t" << i << std::endl;
	}
	catch (const std::exception & e)
	{
		if (s.length() == 1)
		{
			c = argv[1][0];

			std::cout << "char\t" << "'" << c << "'" << std::endl;
			std::cout << "int\t" << static_cast<int>(c) << std::endl;
			std::cout << "float\t" << static_cast<float>(c) << std::endl;
			std::cout << "double\t" << static_cast<double>(c) << std::endl;
			return 0;
		}
		std::cout << "char\timpossible" << std::endl;
		std::cout << "int\timpossible" << std::endl;
	}

	try
	{
		f = std::stof(s);
		std::cout << "float\t" << f << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << "float\timpossible" << std::endl;
	}

	try
	{
		d = std::stod(s);
		std::cout << "double\t" << d << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << "double\timpossible" << std::endl;
	}
	return 0;
}
