/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACPPount.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:36:39 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/07/30 10:28:45 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ACPPount.hpp"
#include <iostream>

int ACPPount::_nbACPPounts = 0;
int ACPPount::_totalAmount = 0;
int ACPPount::_totalNbDeposits = 0;
int ACPPount::_totalNbWithdrawals = 0;

ACPPount::ACPPount(int initial_deposit )
{
	t::_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    this->_aCPPountIndex = t::_nbACPPounts++;
    t::_displayTimestamp();
    std::cout << "index:" << this->_aCPPountIndex;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";created" << std::endl;
}

ACPPount::ACPPount( void )
{
    std::cout << "the default constructor is called" << std::endl;
}

ACPPount::~ACPPount( void )
{
    t::_nbACPPounts--;
    t::_displayTimestamp();
    std::cout << "index:" << this->_aCPPountIndex;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";closed" << std::endl;
}

int ACPPount::getNbACPPounts( void )
{
    return t::_nbACPPounts;
}

int ACPPount::getTotalAmount( void )
{
    return t::_totalAmount;
}

int ACPPount::getNbDeposits( void )
{
    return t::_totalNbDeposits;
}

int	ACPPount::getNbWithdrawals(void)
{
    return t::_totalNbWithdrawals;
}

void	ACPPount::displayACPPountsInfos(void)
{
    t::_displayTimestamp();
    std::cout << "aCPPounts:" << t::_nbACPPounts;
    std::cout << ";total:" << t::_totalAmount;
    std::cout << ";deposits:" << t::_totalNbDeposits;
    std::cout << ";withdrawals:" << t::_totalNbWithdrawals << std::endl;
	t::_totalAmount = 0;
}

void	ACPPount::makeDeposit( int deposit )
{
    t::_displayTimestamp();
    std::cout << "index:" << this->_aCPPountIndex;
    std::cout << ";p_amount:" << this->checkAmount();
    std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";nb_deposits:" << ++this->_nbDeposits << std::endl;
	t::_totalAmount += this->_amount;
	t::_totalNbDeposits++;
}

bool	ACPPount::makeWithdrawal( int withdrawal )
{
    t::_displayTimestamp();
    std::cout << "index:" << this->_aCPPountIndex;
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

int		ACPPount::checkAmount( void ) const
{
    return (this->_amount);
}

void	ACPPount::displayStatus( void ) const
{
    t::_displayTimestamp();
    std::cout << "index:" << this->_aCPPountIndex;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	ACPPount::_displayTimestamp( void )
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
