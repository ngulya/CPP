// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 19:57:16 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 19:57:16 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string n){
	_name = n;
}

const std::string &Weapon::getType(void){
	return _name;
}

void	Weapon::setType(std::string n){
	_name = n;
}

Weapon::~Weapon(void){
	return;
}