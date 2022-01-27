/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:23:13 by cjang             #+#    #+#             */
/*   Updated: 2022/01/28 01:32:18 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <locale>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	std::cout << "Phonebook start" << std::endl;
	this->_numContact = 0;
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
		for (int i = 0; i < (int)s.length(); i++)
			s[i] = std::toupper(s[i]);
		if (s.compare("EXIT") == 0)
			return ;
		else if (s.compare("ADD") == 0)
			this->add();
		else if (s.compare("SEARCH") == 0)
			this->search();
		else
			std::cout << "Input [ADD] [SEARCH] [EXIT]" << std::endl;
	}

}

void	PhoneBook::add(void) {

	std::string		s[5];

	while (s[0].length() == 0)
	{
		std::cout << "[First Name] >> ";
		std::getline(std::cin, s[0]);
	}
	while (s[1].length() == 0)
	{
		std::cout << "[Last Name] >> ";
		std::getline(std::cin, s[1]);
	}
	while (s[2].length() == 0)
	{	
		std::cout << "[NickName] >> ";
		std::getline(std::cin, s[2]);
	}
	while (s[3].length() == 0)
	{
		std::cout << "[Phone Number] >> ";
		std::getline(std::cin, s[3]);
	}
	std::cout << "[Darkest Secret] >> ";
	std::getline(std::cin, s[4]);

	this->_contact[this->_index].setContact(s);
	if (this->_numContact < 8)
		(this->_numContact)++;
	this->_index = (this->_index + 1) % 8;
	
	return ;

}

void	PhoneBook::search(void) {

	std::string		s;
	int				num;

	if (this->_numContact == 0)
	{
		std::cout << "Please input [ADD] Contact" << std::endl;
		return ;
	}

	std::cout << "|";
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "FirstName" << "|";
	std::cout << std::setw(10) << "LastName" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;

	for (int i = 0; i < this->_numContact; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i << "|";
		if (this->_contact[i].getFirstname().length() < 10)
			std::cout << std::setw(10) << this->_contact[i].getFirstname() << "|";
		else
			std::cout << this->_contact[i].getFirstname().substr(0, 9) << ".|";
		if (this->_contact[i].getLastname().length() < 10)
			std::cout << std::setw(10) << this->_contact[i].getLastname() << "|";
		else
			std::cout << this->_contact[i].getLastname().substr(0, 9) << ".|";
		if (this->_contact[i].getNickname().length() < 10)
			std::cout << std::setw(10) << this->_contact[i].getNickname() <<  "|" << std::endl;
		else
			std::cout << this->_contact[i].getNickname().substr(0, 9) << ".|" << std::endl;
	}

	if (this->_numContact == 0)
		return ;

	std::cout << "which information of 'index' do you want?" << std::endl;

	while (1)
	{
		std::cout << "index >> ";
		std::getline(std::cin, s);
		for (int i = 0; i < (int)s.length(); i++)
			s[i] = std::toupper(s[i]);
		num = s.compare("0");
		if (s.compare("EXIT") == 0)
			return ;
		else if (s.length() == 1 && num >= 0 && num < this->_numContact)
		{
			std::cout << std::setw(24) << "[First Name] | ";
			std::cout << this->_contact[num].getFirstname() << std::endl;
			std::cout << std::setw(24) << "[Last Name] | ";
			std::cout << this->_contact[num].getLastname() << std::endl;
			std::cout << std::setw(24) << "[NickName] | ";
			std::cout << this->_contact[num].getNickname() << std::endl;
			std::cout << std::setw(24) << "[Phone Number] | ";
			std::cout << this->_contact[num].getPhoneNumber() << std::endl;
			std::cout << std::setw(24) << "[Darkest Secret] | ";
			std::cout << this->_contact[num].getDarkestSecret() << std::endl;
			return ;
		}
		else
			std::cout << "Input 'index' or [EXIT]" << std::endl;
	}
	
	return ;

}
