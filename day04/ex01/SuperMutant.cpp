// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:30:12 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:30:12 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Enemy.hpp"
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant"){
	std::cout<<"Gaaah. Me want smash heads !"<<std::endl;
	_die = "Aaargh ...";
	return;
}

SuperMutant::SuperMutant(SuperMutant const &rhs){
	*this = rhs;
}

SuperMutant::~SuperMutant(void){
	std::cout<<_die<<std::cout;
}

SuperMutant 	&SuperMutant::operator=(SuperMutant const &rhs){
	_HP = rhs.getHP();
	_type = rhs.getType();
	return *this;
}

void 	SuperMutant::takeDamage(int i){
	if(_HP > 0){
		_HP = _HP - i + 3 > 0 ? _HP - i + 3 : 0;
		if(!_HP)
			std::cout<<_die<<std::endl;
	}
	else if(!_HP)
		std::cout<<_die<<std::endl;
}