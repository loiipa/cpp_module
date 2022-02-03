/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:56:27 by cjang             #+#    #+#             */
/*   Updated: 2022/02/03 18:41:22 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Karen		karen;
	std::string	complain;

	if (argc != 2)
	{
		std::cout << "Write Karen's complain." << std::endl;
		return (0);
	}
	complain = argv[1];
	karen.complain(complain);

	return (0);
}
