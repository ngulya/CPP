// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 19:57:39 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 19:57:40 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string n){
	_name = n;
	return;
}

void	HumanB::setWeapon(Weapon &w){
	_weapon = &w;
	return;
}

void	HumanB::attack(void){
	std::cout<<_name<<" attacks with his "<<(*_weapon).getType()<<std::endl;
}
HumanB::~HumanB(){
	return;
}
