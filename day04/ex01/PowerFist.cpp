// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:16:00 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:16:01 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <ostream>
#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50){
	return;
}

PowerFist::PowerFist(PowerFist const &rhs){
	*this = rhs;
}
PowerFist::~PowerFist(void){
	return;
}

void	PowerFist::attack(void) const{
	std::cout<<"* pschhh... SBAM! *"<<std::endl;
}

PowerFist			&PowerFist::operator=(PowerFist const &rhs){
	_name = rhs.getName();
	_AP = rhs.getAPCost();
	_nDam = rhs.getDamage();
	return *this;
}