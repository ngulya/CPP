// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 21:35:21 by ngulya            #+#    #+#             //
//   Updated: 2017/11/03 21:35:21 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <iostream>
#include <stdlib.h>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	std::cout<<"ScavTrap default constructor called with default robot"<<std::endl;
	_name = "Mister N";
	_HP = 20;
	_mHP = 20;
	_EP = 125;
	_mEP = 125;
	_Lvl = 4;
	_mDam = 20;
	_rDam = 35;
	_Armor = 13;
}

ScavTrap::ScavTrap(std::string n){
	std::cout<<"ScavTrap default constructor called with default robot"<<std::endl;
	_name = n;
	_HP = 20;
	_mHP = 20;
	_EP = 125;
	_mEP = 125;
	_Lvl = 4;
	_mDam = 20;
	_rDam = 35;
	_Armor = 13;
}

ScavTrap::ScavTrap(std::string n, int mhp, int mep, int lvl, int mdam, int rdam, int armor){
	std::cout<<"ScavTrap constructor "<<n<<" called"<<std::endl;
	_name = n;
	_mHP = mhp;
	_HP = mhp;
	_EP = mep;
	_mEP = mep;
	_Lvl = lvl;
	_mDam = mdam;
	_rDam = rdam;
	_Armor = armor >= 13 ? 10 : armor;
}


ScavTrap::~ScavTrap(void){
	std::cout<<"ScavTrap destructor "<<_name<<" called"<<std::endl;
}

ScavTrap 	&ScavTrap::operator=(ScavTrap const &src){
	std::cout<<"Assignation this->name = "<<src.getname()<<" called"<<std::endl;
	this->_HP = src.getHP();
	this->_mHP = src.getmHP();
	this->_EP = src.getEP();
	this->_mEP = src.getmEP();
	this->_Lvl = src.getLvl();
	this->_name = src.getname();
	this->_mDam = src.getmDam();
	this->_rDam = src.getrDam();
	this->_Armor = src.getArmor();
	return *this;
}

void		ScavTrap::challengeNewcomer(std::string const & target){
	std::string		s[5] = {"STrap_TYPE1", "STrap_TYPE2", "STrap_TYPE3", "STrap_TYPE4", "STrap_TYP5"};
	if(_HP > 0)
	{
		if(_EP >= 25)
		{
			std::cout<<"FR4G-TP <"<<_name<<"> attacks <"<<target;
			std::cout<<"> with |"<<s[rand()%5]<<"| 25 points of damage !"<<std::endl;
			_EP -= 25;
		}
		else
			std::cout<<"Not enouhg ep for killing <"<<target<<"> ;("<<std::endl;
	}
}