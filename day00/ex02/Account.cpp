/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 08:11:22 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/07 09:22:10 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"<< "total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals<<std::endl;

}

Account::Account(int initial)
{
	
	_totalAmount += initial;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"<< "amount:" << _amount << ";created" << std::endl;
	
}
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"<< "amount:" << _amount << ";closed" <<std::endl;
	
}


void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"<< "p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits + 1 <<std::endl;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount+= deposit;
	_totalNbDeposits++;
}

bool  Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount >= withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";"<< "p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << ++_nbWithdrawals <<std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;

	}
	else
	{
		std::cout << "index:" << _accountIndex << ";"<< "p_amount:" << _amount << ";withdrawal:refused" <<std::endl;
		return (false);
	}
	return (true);
}

int Account::checkAmount( void ) const
{
	return (_amount);
}

void Account::displayStatus( void ) const
{

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"<< "amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals <<std::endl;

}


void Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";

}