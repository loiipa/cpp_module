/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:56:27 by cjang             #+#    #+#             */
/*   Updated: 2022/02/04 13:17:14 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>
#include <locale>

int	main(int argc, char **argv)
{
	Karen		karen;
	std::string	complain;

	if (argc != 2)
	{
		std::cout << "Write Karen's complain." << std::endl;
		return (0);
	}
	else
	{
		for (int i = 0; argv[1][i]; i++)
			complain += std::toupper(argv[1][i]);
	}
	karen.complain(complain);
	return (0);
}
