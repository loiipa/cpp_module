/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:01:47 by cjang             #+#    #+#             */
/*   Updated: 2022/01/27 21:28:21 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	// std::cout << "Contact created" << std::endl;
	return;

}

Contact::~Contact() {

	// std::cout << "Contact destroyed" << std::endl;
	return;

}

std::string	Contact::get_firstname(void) const {

	return (this->_first_name);

}

std::string	Contact::get_lastname(void) const {

	return (this->_last_name);

}

std::string	Contact::get_nickname(void) const {

	return (this->_nick_name);

}

std::string	Contact::get_phone_number(void) const {

	return (this->_phone_number);

}

std::string	Contact::get_darkest_secret(void) const {

	return (this->_darkest_secret);

}

void	Contact::setcontact(std::string s[5]) {

	std::cout << "Set Success" << std::endl;
	this->_first_name = s[0];
	this->_last_name = s[1];
	this->_nick_name = s[2];
	this->_phone_number = s[3];
	this->_darkest_secret = s[4];
	return ;

}
