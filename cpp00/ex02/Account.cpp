/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:36:39 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/07/30 10:28:45 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit )
{
	t::_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    this->_accountIndex = t::_nbAccounts++;
    t::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";created" << std::endl;
}

Account::Account( void )
{
    std::cout << "the default constructor is called" << std::endl;
}

Account::~Account( void )
{
    t::_nbAccounts--;
    t::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";closed" << std::endl;
}

int Account::getNbAccounts( void )
{
    return t::_nbAccounts;
}

int Account::getTotalAmount( void )
{
    return t::_totalAmount;
}

int Account::getNbDeposits( void )
{
    return t::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
    return t::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
    t::_displayTimestamp();
    std::cout << "accounts:" << t::_nbAccounts;
    std::cout << ";total:" << t::_totalAmount;
    std::cout << ";deposits:" << t::_totalNbDeposits;
    std::cout << ";withdrawals:" << t::_totalNbWithdrawals << std::endl;
	t::_totalAmount = 0;
}

void	Account::makeDeposit( int deposit )
{
    t::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->checkAmount();
    std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";nb_deposits:" << ++this->_nbDeposits << std::endl;
	t::_totalAmount += this->_amount;
	t::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    t::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->checkAmount();
    std::cout << ";withdrawal:";
	this->_totalAmount += this->checkAmount();
    if (this->checkAmount() < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	t::_totalNbWithdrawals++;
	this->_nbWithdrawals++;
    std::cout << withdrawal;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    t::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t  tmp;
    tm      *timer;

    time(&tmp);
    timer = localtime(&tmp);
    std::cout << "[" << timer->tm_year + 1900;
    std::cout << (timer->tm_mon < 9 ? "0" : "") << timer->tm_mon + 1;
    std::cout << (timer->tm_mday < 9 ? "0" : "") << timer->tm_mday << "_";
    std::cout << (timer->tm_hour < 9 ? "0" : "") << timer->tm_hour;
    std::cout << (timer->tm_min < 9 ? "0" : "") << timer->tm_min;
    std::cout << (timer->tm_sec < 9 ? "0" : "") << timer->tm_sec << "] ";
}
