/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:01:47 by cjang             #+#    #+#             */
/*   Updated: 2022/01/28 01:31:53 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	Contact::_contactCount += 1;
	if (Contact::_contactCount == 8)
		std::cout << "(Contact count [8])" << std::endl;
	return ;

}

Contact::~Contact() {

	Contact::_contactCount -= 1;
	if (Contact::_contactCount == 0)
		std::cout << "(Contact count [0])" << std::endl;
	return ;

}

std::string	Contact::getFirstname(void) const {

	return (this->_firstName);

}

std::string	Contact::getLastname(void) const {

	return (this->_lastName);

}

std::string	Contact::getNickname(void) const {

	return (this->_nickName);

}

std::string	Contact::getPhoneNumber(void) const {

	return (this->_phoneNumber);

}

std::string	Contact::getDarkestSecret(void) const {

	return (this->_darkestSecret);

}

void	Contact::setContact(std::string s[5]) {

	std::cout << "Set Success" << std::endl;
	this->_firstName = s[0];
	this->_lastName = s[1];
	this->_nickName = s[2];
	this->_phoneNumber = s[3];
	this->_darkestSecret = s[4];
	return ;

}

int	Contact::_contactCount = 0;
