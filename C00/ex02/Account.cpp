/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:34:18 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/08 03:40:02 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <ctime>

//-------------------init static non-member attributes-------------------------
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//---------------------------Constructor---------------------------------------
Account::Account( int initial_deposit ) :	_accountIndex(_nbAccounts),
											_amount(initial_deposit),
											_nbDeposits(0),
											_nbWithdrawals(0)
{
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout	<< "index:"		<< this->_accountIndex
				<< ";amount:"	<< this->_amount
				<< ";created"	<< std::endl;

}
//---------------------------Destructor---------------------------------------
Account::~Account( void )
{
	_displayTimestamp();
	std::cout	<< "index:"		<< this->_accountIndex
				<< ";amount:"	<< this->_amount
				<< ";closed"	<< std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}


//---------------------------Static-------------------------------------------
/*
	Attributtes and functions defined for the class and not for each instance
*/

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);

}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout	<< "accounts:"		<< getNbAccounts()
				<< ";total:"		<< getTotalAmount()
				<< ";deposits:"		<< getNbDeposits()
				<< ";withdrawals:"	<< getNbWithdrawals()
				<< std::endl;
}

void Account::_displayTimestamp( void )
{
	std::time_t	timestamp = std::time(NULL);
	tm			*time = localtime(&timestamp);

	std::cout	<< "["			<< time->tm_year + 1900
				<< time->tm_mon << time->tm_mday
				<< '_'			<< time->tm_hour
				<< time->tm_min	<< time->tm_sec	<< "] ";
}
