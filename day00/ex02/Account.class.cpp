// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/30 19:19:09 by ngulya            #+#    #+#             //
//   Updated: 2017/10/30 19:19:09 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Account.class.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
:_accountIndex(Account::_nbAccounts),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0)
{

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<checkAmount()<<";created"<<std::endl;
	return;
}

Account::Account(void){
	return;
}

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";closed"<<std::endl;
	return;
}

void	Account::makeDeposit( int deposit ){
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	this->_nbDeposits++;
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount;
	this->_amount += deposit;
	std::cout<<";deposit:"<<deposit<<";amount:"<<this->_amount;
	std::cout<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
}

int 	Account::checkAmount( void ) const{
	return this->_amount;
}

bool	Account::makeWithdrawal( int withdrawal ){
	Account::_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";withdrawal:";
	if(withdrawal > checkAmount())
	{
		std::cout<<"refused"<<std::endl;
		return false;
	}
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	std::cout<<withdrawal<<";amount:"<<this->_amount<<";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
	return true;
}

void	Account::_displayTimestamp( void ){
	std::cout<<"[20150406_153629] ";
}

int		Account::getNbAccounts(void){
	std::cout<<"accounts:"<<Account::_nbAccounts;
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ){
	std::cout<<";total:"<<Account::_totalAmount;
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ){
	std::cout<<";deposits:"<<Account::_totalNbDeposits;
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ){
	std::cout<<";withdrawals:"<<Account::_totalNbWithdrawals<<std::endl;
	return Account::_totalNbWithdrawals;
}

void	Account::displayStatus( void ) const{
	
	Account::_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount;
	std::cout<<";deposits:"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

void	Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	Account::getNbAccounts();
	Account::getTotalAmount();
	Account::getNbDeposits();
	Account::getNbWithdrawals();
}