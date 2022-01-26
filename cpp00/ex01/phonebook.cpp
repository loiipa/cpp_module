/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:23:13 by cjang             #+#    #+#             */
/*   Updated: 2022/01/27 02:39:11 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook(void) {

	std::cout << "Phonebook created" << std::endl;
	return;

}
Phonebook::~Phonebook(void) {

	std::cout << "Phonebook destroyed" << std::endl;
	return;

}
