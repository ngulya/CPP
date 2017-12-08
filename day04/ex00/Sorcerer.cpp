// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 15:07:37 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 15:07:37 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <ostream>

Sorcerer::Sorcerer(void){
	_name = "Ikof";
	_title = "Bad";
	std::cout<<_name<<", "<<_title<<", is born !"<<std::endl;
}

std::string	Sorcerer::getTitle(void) const{
	return _title;
}

std::string	Sorcerer::getName(void) const{
	return _name;
}

Sorcerer::Sorcerer(std::string n, std::string t){
	_name = n;
	_title = t;
	std::cout<<_name<<", "<<_title<<", is born !"<<std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &rhs){
	*this = rhs;
	std::cout<<_name<<", "<<_title<<", is born(copy) !"<<std::endl;
}

void Sorcerer::polymorph(Victim const &r) const{
	r.getPolymorphed();
}

void Sorcerer::polymorph(Peon const &r) const{
	r.getPolymorphed();
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs){
	_name = rhs.getName();
	_title = rhs.getTitle();
	std::cout<<_name<<", "<<_title<<", is born(assignation) !"<<std::endl;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs){
	o<<"I am "<<rhs.getName()<<", "<<rhs.getTitle()<<", and I like ponies !"<<std::endl;
	return o;
}

Sorcerer::~Sorcerer(void){
	std::cout<<_name<<", "<<_title<<", is dead. Consequences will never be the same !"<<std::endl;	
}

