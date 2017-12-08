// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 22:05:45 by ngulya            #+#    #+#             //
//   Updated: 2017/11/03 22:05:46 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout<<"Default ClapTrap constructor called with default robot"<<std::endl;
	_name = "Mister Z";
	_HP = 370;
	_mHP = 370;
	_EP = 125;
	_mEP = 125;
	_Lvl = 12;
	_mDam = 70;
	_rDam = 40;
	_Armor = 3;
}

ClapTrap::ClapTrap(std::string n){
	std::cout<<"ClapTrap constructor "<<n<<" called"<<std::endl;
	_name = n;
}

ClapTrap::ClapTrap(std::string n, int mhp, int mep, int lvl, int mdam, int rdam, int armor){
	std::cout<<"ClapTrap constructor "<<n<<" called"<<std::endl;
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

ClapTrap::ClapTrap(ClapTrap const &src){
	*this = src;
	std::cout<<"ClapTrap copy constructor called"<<std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout<<"Destructor <"<<getname()<<"> called"<<std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src){
	std::cout<<"ClapTrap assignation this->name = "<<src.getname()<<" called"<<std::endl;
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
void		ClapTrap::Die(void){
	if(_HP != 0){
		_HP = 0;
		std::cout<<"I'm sorry, "<<_name<<" Die"<<std::endl;
	}
}

void		ClapTrap::rangedAttack(std::string const & target){
	std::cout<<"FR4G-TP <"<<_name<<"> attacks <"<<target;
	std::cout<<"> at range, causing <"<<_rDam<<"> points of damage !"<<std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target){
	std::cout<<"FR4G-TP <"<<_name<<"> attacks <"<<target;
	std::cout<<"> at melee, causing <"<<_mDam<<"> points of damage !"<<std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount){
	if(_HP && _Armor < amount)
	{
		if((_Armor - amount)*-1 >= _HP)
			Die();
		else
			_HP = _HP + _Armor - amount;
	}
}

void		ClapTrap::beRepaired(unsigned int amount){
	if(_HP == 0)
		std::cout<<"Die "<<_name<<" can't reborn"<<std::endl;
	else{
		std::cout<<"robot: "<<_name<<" repaired"<<std::endl;
		_HP = _HP + amount > _mHP ? _mHP : _HP + amount;
	}
}

unsigned int	ClapTrap::getHP(void) const{
	return _HP;
}

unsigned int	ClapTrap::getmHP(void) const{
	return _mHP;
}

unsigned int	ClapTrap::getEP(void) const{
	return _EP;
}

unsigned int	ClapTrap::getmEP(void) const{
	return _mEP;
}

unsigned int	ClapTrap::getLvl(void) const{
	return _Lvl;
}

unsigned int	ClapTrap::getmDam(void) const{
	return _mDam;
}

unsigned int	ClapTrap::getrDam(void) const{
	return _rDam;
}

unsigned int	ClapTrap::getArmor(void) const{
	return _Armor;
}

std::string		ClapTrap::getname(void) const{
	return _name;
}