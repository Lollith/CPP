/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouet <agouet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:18:47 by agouet            #+#    #+#             */
/*   Updated: 2022/09/21 17:40:26 by agouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

	Account::Account( int initial_deposit ): _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
		this->_accountIndex= getNbAccounts();
		_displayTimestamp();
		std::cout  <<" index:" << _accountIndex;
		std::cout << ";amount:"<< _amount;
		std::cout << ";created "<< std::endl;
		Account::_nbAccounts++;
		return;
	}
	Account::Account( void ){
		return;
	}

	Account::~Account( void ){
		return;
	}



	int	Account::getNbAccounts( void ){
		return(Account::_nbAccounts );
	}
	int	Account::getTotalAmount( void ){
		return( Account::_totalAmount );
	}
	int	Account::getNbDeposits( void ){
		return (Account::_totalNbDeposits);
	}
	int	Account::getNbWithdrawals( void ){
		return ( Account::_totalNbWithdrawals);
	}
	//void	Account::displayAccountsInfos( void ){
//	}




	// void	makeDeposit( int deposit );
	// bool	makeWithdrawal( int withdrawal );
	// int		checkAmount( void ) const;
	// void	displayStatus( void ) const;

	void	Account::_displayTimestamp( void ){
		char buffer [80];
	  time_t rawtime;
	  time(&rawtime);
	  struct tm *timeinfo;
	  timeinfo = localtime (&rawtime);
	  strftime(buffer, 80, "%Y%m%d_%H%M%S",timeinfo);
	 std::cout << buffer;
	 }

	int	Account::_nbAccounts = 0;
	int Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;
