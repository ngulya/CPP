// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 15:08:10 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 15:08:10 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>
#include <ostream>

Peon::Peon(void){
	_name = "Peon";	
	std::cout<<"Zog zog."<<std::endl;
}

Peon::Peon(std::string n): Victim(n){
	std::cout<<"Zog zog."<<std::endl;
}
Peon::Peon(Peon const &rhs){
	*this = rhs;
}

Peon::~Peon(void){
	std::cout<<"Bleuark..."<<std::endl;
}

std::string	Peon::getName(void) const{
	return _name;
}

std::ostream	&operator<<(std::ostream &o, Peon const &rhs){
	o<<"I'm "<<rhs.getName()<<" and I like otters !"<<std::endl;
	return o;	
}


void	Peon::getPolymorphed(void) const{
	std::cout<<_name<<" has been turned into a pink pony !"<<std::endl;
}
Peon &Peon::operator=(Peon const &rhs){
	this->_name = rhs.getName();
	return *this;
}