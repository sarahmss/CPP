/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:34:18 by smodesto          #+#    #+#             */
/*   Updated: 2022/09/10 16:04:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <ctime>
# include <iomanip>


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

	std::cout	<<	"["					<< (time->tm_year + 1900)
				<<	std::setfill('0')	<< std::setw(2) << (1 + time->tm_mon)
				<<	std::setfill('0')	<< std::setw(2) << time->tm_mday
				<< "_"				
				<<	std::setfill('0')	<< std::setw(2)	<< time->tm_hour
				<<	std::setfill('0')	<< std::setw(2)	<< time->tm_min
				<<	std::setfill('0')	<< std::setw(2)	<< time->tm_sec
				<< "] ";
}

//------------------------------------------------------------------------------

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	this->_amount += deposit;

	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";p_amount:" << (this->_amount - deposit)
				<< ";deposit:" << deposit
				<< ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits
				<< std::endl;

	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout	<< "index:"		<<	this->_accountIndex
				<< ";p_amount:"	<<	this->_amount;
	if (this->_amount >= withdrawal)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout	<< ";withdrawal:"		<<	withdrawal
					<< ";amount:"			<<	this->_amount
					<< ";nb_withdrawals:"	<<	this->_nbWithdrawals
					<< std::endl;
		return (true);
	}
	std::cout << ";withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount) ;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();

	std::cout	<<	"index:"		<< this->_accountIndex
				<<	";amount:"		<< this->_amount
				<<	";deposits:"	<< this->_nbDeposits
				<<	";withdrawals:"	<< this->_nbWithdrawals
				<<	std::endl;
	return ;
}

