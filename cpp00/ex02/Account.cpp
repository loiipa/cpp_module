/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 00:35:27 by cjang             #+#    #+#             */
/*   Updated: 2022/01/28 14:22:20 by cjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts( void ) {

	return (Account::_nbAccounts);

}

int	Account::getTotalAmount( void ) {

	return (Account::_totalAmount);

}

int	Account::getNbDeposits( void ) {

	return (Account::_totalNbDeposits);

}

int	Account::getNbWithdrawals( void ) {

	return (Account::_totalNbWithdrawals);

}

void	Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;

	return ;

}

Account::Account( int initial_deposit ) {

	this->_accountIndex = Account::getNbAccounts();
	this->_amount = initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;

	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;

	return ;

}

Account::~Account( void ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;

	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;
	return ;

}

void	Account::makeDeposit( int deposit ) {

	int		p_amount;

	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << p_amount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;

	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;

	return ;

}
bool	Account::makeWithdrawal( int withdrawal ) {

	int		p_amount;

	p_amount = this->_amount;
	if (Account::checkAmount() < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << p_amount;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;

		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << p_amount;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

		Account::_totalNbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		return (true);
	}

}
int		Account::checkAmount( void ) const {

	return (this->_amount);

}
void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;

}

void	Account::_displayTimestamp( void ) {

	std::cout << "[19920104_091532] ";
	return ;
}

Account::Account( void ) {

	std::cout << "Account" << std::endl;
	return ;

}
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
