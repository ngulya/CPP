// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:20:07 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:20:07 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy(void){
	return;
}

Enemy::Enemy(int hp, std::string const & type){
	_HP = hp;
	_type = type;
}

Enemy::Enemy(Enemy const &rhs){
	*this = rhs;
}

std::string	Enemy::getType(void) const{
	return _type;
}

int			Enemy::getHP(void) const{
	return _HP;
}

Enemy		&Enemy::operator=(Enemy const &rhs){
	_HP = rhs.getHP();
	_type = rhs.getType();
	return *this;
}

Enemy::~Enemy(void){
	return;
}

void Enemy::takeDamage(int i){
	if(_HP > 0)
		_HP = _HP - i > 0 ? _HP - i : 0;
	else if(!_HP)
		std::cout<<_die<<std::endl;
}