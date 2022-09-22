/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lollith <lollith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:18:47 by agouet            #+#    #+#             */
/*   Updated: 2022/09/22 11:56:29 by lollith          ###   ########.fr       */
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
		Account::_totalAmount = Account::_totalAmount + _amount;
		return;
	}
	
	Account::Account( void ){
		return;
	}

	Account::~Account( void ){
		_displayTimestamp();
		std::cout  <<" index:" << _accountIndex;
		std::cout << ";amount:"<< _amount;
		std::cout << ";closed "<< std::endl;
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

	void	Account::displayAccountsInfos( void ){
		_displayTimestamp();
		std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawal:" << _totalNbWithdrawals <<std::endl;
	}




	void	Account::makeDeposit( int deposit ){
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" <<  this->_amount << ";";
		std::cout << "deposit:" << deposit << ";";
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	}

	bool	Account::makeWithdrawal( int withdrawal ){
		Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" <<  this->_amount << ";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
	}

	int		Account::checkAmount( void ) const{
		return (this->_amount > 0);
	}

	void	Account::displayStatus( void ) const{
		_displayTimestamp();
		std::cout  <<" index:" << _accountIndex;
		std::cout << ";amount:" << _amount;
		std::cout << ";deposit:" << _nbDeposits;
		std::cout << ";withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
	}

	void	Account::_displayTimestamp( void ){
		
		char buffer [80];
		time_t rawtime;
		struct tm *timeinfo;

		time(&rawtime);
		timeinfo = localtime (&rawtime);
		strftime(buffer, 80, "%Y%m%d_%H%M%S",timeinfo);
		std::cout << "["<< buffer <<"]";
	}

	int	Account::_nbAccounts = 0;
	int Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;
