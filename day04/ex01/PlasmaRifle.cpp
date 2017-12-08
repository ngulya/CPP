// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:08:09 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:08:09 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <ostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21){
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &rhs){
	*this = rhs;
}
PlasmaRifle::~PlasmaRifle(void){
	return;
}

void	PlasmaRifle::attack(void) const{
	std::cout<<"* piouuu piouuu piouuu *"<<std::endl;
}

PlasmaRifle			&PlasmaRifle::operator=(PlasmaRifle const &rhs){
	_name = rhs.getName();
	_AP = rhs.getAPCost();
	_nDam = rhs.getDamage();
	return *this;
}