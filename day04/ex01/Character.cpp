// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:42:49 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:42:49 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"


Character::Character(void){
	_AP = 40;
	_weapon = nullptr;
}

Character::Character(std::string const & name){
	_name = name;
	_AP = 40;
	_weapon = nullptr;
}

Character::Character(Character const &rhs){
	*this = rhs;
}

void		Character::recoverAP(void){
	_AP += 10;
	_AP = _AP > 40 ? 40 : _AP;
}

void		Character::equip(AWeapon* a){
	_weapon = a;
}

void		Character::attack(Enemy* a){

	if((_weapon) && _AP >= (*_weapon).getAPCost())
	{
		_AP -= (*_weapon).getAPCost();
		std::cout<<_name<<" attacks "<<(*a).getType()<<" with a "<<(*_weapon).getName()<<std::endl;
		(*_weapon).attack();
		(*a).takeDamage((*_weapon).getDamage());
			
	}
}

std::string	Character::getName(void) const{
	return _name;
}

int			Character::have_weapon(void) const{
	if(_weapon)
		return 1;
	return 0;
}

int			Character::getAP(void) const{
	return _AP;
}

AWeapon*	Character::getWeapon(void) const{
	return _weapon;
}

Character 	&Character::operator=(Character const &rhs){
	_name = rhs.getName();
	_AP = rhs.getAP();
	_weapon = rhs.getWeapon();
	return *this;
}



std::ostream	&operator<<(std::ostream &o, Character const &rhs){
	// if(_weapon)

	o<<rhs.getName()<<" has "<<rhs.getAP()<<" AP and ";
	if(rhs.have_weapon())
		o<<"wields a "<<(*rhs.getWeapon()).getName()<<std::endl;
	else
		o<<"is unarmed"<<std::endl;
	return o;
}

Character::~Character(void){
	return;
}


