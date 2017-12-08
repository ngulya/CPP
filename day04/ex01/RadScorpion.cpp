// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:39:35 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:39:35 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Enemy.hpp"
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion"){
	std::cout<<"* click click click *"<<std::endl;
	_die = "* SPROTCH *";
	return;
}

RadScorpion::RadScorpion(RadScorpion const &rhs){
	*this = rhs;
}

RadScorpion::~RadScorpion(void){
	std::cout<<_die<<std::cout;
}

RadScorpion 	&RadScorpion::operator=(RadScorpion const &rhs){
	_HP = rhs.getHP();
	_type = rhs.getType();
	return *this;
}

void 	RadScorpion::takeDamage(int i){
	if(_HP > 0){
		_HP = _HP - i + 3 > 0 ? _HP - i + 3 : 0;
		if(!_HP)
			std::cout<<_die<<std::endl;
	}
	else if(!_HP)
		std::cout<<_die<<std::endl;
}