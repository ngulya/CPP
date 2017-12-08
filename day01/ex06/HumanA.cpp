// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 19:57:27 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 19:57:27 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string n, Weapon &w){
	_weapon = &w;
	_name = n;
	return;
}
void	HumanA::attack(void){
	std::cout<<_name<<" attacks with his "<<(*_weapon).getType()<<std::endl;
}
HumanA::~HumanA(){
	return;
}
