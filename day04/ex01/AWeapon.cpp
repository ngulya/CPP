// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 16:49:47 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 16:49:47 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"
#include <iostream>

AWeapon::AWeapon(void){
	_nDam = 0;
}

AWeapon::AWeapon(std::string const & name, int ap, int dam){
	_name = name;
	_AP = ap;
	_nDam = dam;
}

AWeapon::AWeapon(AWeapon const &rhs){
	*this = rhs;
}

AWeapon::~AWeapon(void){
}

int		AWeapon::getAPCost() const{
	return _AP;
}

int		AWeapon::getDamage() const{
	return _nDam;
}

std::string		AWeapon::getName() const{
	return _name;
}

AWeapon			&AWeapon::operator=(AWeapon const &rhs){
	_name = rhs.getName();
	_AP = rhs.getAPCost();
	_nDam = rhs.getDamage();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, AWeapon const &rhs){
	o<<"weapon called: "<<rhs.getName()<<" Damage = "<<rhs.getDamage()<<std::endl;
	return o;
}