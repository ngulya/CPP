// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 19:31:18 by ngulya            #+#    #+#             //
//   Updated: 2017/11/03 19:31:20 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <iostream>
#include <stdlib.h>

FragTrap::FragTrap(void){
	std::cout<<"Default constructor called with default robot"<<std::endl;
	_name = "Mister N";
	_HP = 420;
	_mHP = 420;
	_EP = 125;
	_mEP = 125;
	_Lvl = 13;
	_mDam = 100;
	_rDam = 95;
	_Armor = 13;
}

FragTrap::FragTrap(std::string n){
	std::cout<<"Constructor "<<n<<" called"<<std::endl;
	_name = n;
}

FragTrap::FragTrap(std::string n, int mhp, int mep, int lvl, int mdam, int rdam, int armor){
	std::cout<<"Constructor "<<n<<" called"<<std::endl;
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

FragTrap::FragTrap(FragTrap const &src){
	*this = src;
	std::cout<<"Copy constructor called"<<std::endl;
}

FragTrap 	&FragTrap::operator=(FragTrap const &src){
	std::cout<<"Assignation this->name = "<<src.getname()<<" called"<<std::endl;
	this->_HP = src.getHP();
	this->_mHP = src.getmHP();
	this->_EP = src.getEP();
	this->_mEP = src.getmEP();
	this->_Lvl = src.getLvl();
	if(src.getname() != "Bliznec1" && src.getname() != "Bliznec2")
		this->_name = src.getname();
	this->_mDam = src.getmDam();
	this->_rDam = src.getrDam();
	this->_Armor = src.getArmor();
	return *this;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target){
	std::string		s[5] = {"NBIGs", "Lsssssss's", "che che che", "jokkkke", "ljggg_ar"};
	if(_HP > 0)
	{
		if(_EP > 25)
		{
			std::cout<<"FR4G-TP <"<<_name<<"> attacks <"<<target;
		std::cout<<"> with |"<<s[rand()%5]<<"| 25 points of damage !"<<std::endl;
			_EP -= 25;
		}
		else
			std::cout<<"Not enouhg ep for killing <"<<target<<"> ;("<<std::endl;
	}
}


FragTrap::~FragTrap(void){
	std::cout<<"Destructor "<<_name<<" called"<<std::endl;
}