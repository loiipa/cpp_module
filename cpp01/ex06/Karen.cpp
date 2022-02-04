/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:57:01 by cjang             #+#    #+#             */
/*   Updated: 2022/02/04 13:08:30 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(void) {

	return ;
}

Karen::~Karen(void) {

	return ;
}

void	Karen::debug(void) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::info(void) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::warning(void) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::error(void) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::complain(std::string level) {

	std::string	compList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*func[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int			i;

	for (i = 0; i < 4; i++)
	{
		if (level == compList[i])
			break;
	}
	switch (i)
	{
		case 0:
			(this->*func[0])();
		case 1:
			(this->*func[1])();
		case 2:
			(this->*func[2])();
		case 3:
		{
			(this->*func[3])();
			break;
		}
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}
