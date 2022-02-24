/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:35:19 by cjang             #+#    #+#             */
/*   Updated: 2022/02/24 14:18:01 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments." << std::endl;
		return 0;
	}

	Convert		cv(argv[1]);

	cv.toChar();
	cv.toInt();
	cv.toFloat();
	cv.toDouble();
	
	return 0;
}
