/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:23:13 by cjang             #+#    #+#             */
/*   Updated: 2022/01/27 21:53:39 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	std::cout << "Phonebook start" << std::endl;
	this->_num_contact = 0;
	this->_index = 0;
	return ;

}

PhoneBook::~PhoneBook(void) {

	std::cout << "Phonebook end" << std::endl;
	return ;

}

void	PhoneBook::loop(void) {

	std::string		s;

	while (1)
	{
		std::cout << "PhoneBook > ";
		std::getline(std::cin, s);
		if (s.compare("exit") == 0)
			return ;
		else if (s.compare("add") == 0)
			this->add();
		else if (s.compare("search") == 0)
			this->search();
		else
			std::cout << "Input [add] [search] [exit]" << std::endl;
	}

}

void	PhoneBook::add(void) {

	std::string		s[5];

	std::cout << "[First Name] >> ";
	std::getline(std::cin, s[0]);
	std::cout << "[Last Name] >> ";
	std::getline(std::cin, s[1]);
	std::cout << "[NickName] >> ";
	std::getline(std::cin, s[2]);
	std::cout << "[Phone Number] >> ";
	std::getline(std::cin, s[3]);
	std::cout << "[Darkest Secret] >> ";
	std::getline(std::cin, s[4]);

	this->_contact[this->_index].setcontact(s);
	if (this->_num_contact < 8)
		(this->_num_contact)++;
	this->_index = (this->_index + 1) % 8;
	return ;

}

void	PhoneBook::search(void) {

	std::string		s;
	int				num;

	if (this->_num_contact == 0)
	{
		std::cout << "Please [add] Contact" << std::endl;
		return ;
	}
	std::cout << "|";
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "FirstName" << "|";
	std::cout << std::setw(10) << "LastName" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;

	for (int i = 0; i < this->_num_contact; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i << "|";
		if (this->_contact[i].get_firstname().length() < 10)
			std::cout << std::setw(10) << this->_contact[i].get_firstname() << "|";
		else
			std::cout << this->_contact[i].get_firstname().substr(0, 9) << ".|";
		if (this->_contact[i].get_lastname().length() < 10)
			std::cout << std::setw(10) << this->_contact[i].get_lastname() << "|";
		else
			std::cout << this->_contact[i].get_lastname().substr(0, 9) << ".|";
		if (this->_contact[i].get_nickname().length() < 10)
			std::cout << std::setw(10) << this->_contact[i].get_nickname() <<  "|" << std::endl;
		else
			std::cout << this->_contact[i].get_nickname().substr(0, 9) << ".|" << std::endl;
	}
	if (this->_num_contact == 0)
		return ;
	std::cout << "which information of 'index' do you want?" << std::endl;

	while (1)
	{
		std::cout << "index >> ";
		std::getline(std::cin, s);
		num = s.compare("0");
		if (s.compare("exit") == 0)
			return ;
		else if (s.length() == 1 && num >= 0 && num < this->_num_contact)
		{
			std::cout << std::setw(24) << "[First Name] | ";
			std::cout << this->_contact[num].get_firstname() << std::endl;
			std::cout << std::setw(24) << "[Last Name] | ";
			std::cout << this->_contact[num].get_lastname() << std::endl;
			std::cout << std::setw(24) << "[NickName] | ";
			std::cout << this->_contact[num].get_nickname() << std::endl;
			std::cout << std::setw(24) << "[Phone Number] | ";
			std::cout << this->_contact[num].get_phone_number() << std::endl;
			std::cout << std::setw(24) << "[Darkest Secret] | ";
			std::cout << this->_contact[num].get_darkest_secret() << std::endl;
			return ;
		}
		else
			std::cout << "Input 'index' or [exit]" << std::endl;
	}
	return ;

}
