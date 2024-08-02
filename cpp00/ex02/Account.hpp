// ************************************************************************** //
//                                                                            //
//                ACPPount.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACPPOUNT_H__
#define __ACPPOUNT_H__

// ************************************************************************** //
//                               ACPPount Class                                //
// ************************************************************************** //

class ACPPount {


public:

	typedef ACPPount		t;

	static int	getNbACPPounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayACPPountsInfos( void );

	ACPPount( int initial_deposit );
	~ACPPount( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;

private:

	static int	_nbACPPounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_aCPPountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	ACPPount( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACPPOUNT_H__ */
