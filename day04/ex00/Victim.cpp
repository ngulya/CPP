// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 15:07:57 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 15:07:57 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

Victim::Victim(void){
	// std::cout<<"Some random victim called "<<_name<<" just popped !"<<std::endl;
}

Victim::Victim(std::string n){
	_name = n;
	std::cout<<"Some random victim called "<<n<<" just popped !"<<std::endl;
}

Victim::Victim(Victim const &rhs){
	*this = rhs;
}

std::string	Victim::getName(void) const{
	return _name;
}

Victim 	&Victim::operator=(Victim const &rhs){
	_name = rhs.getName();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Victim const &rhs){
	o<<"I'm "<<rhs.getName()<<" and I like otters !"<<std::endl;
	return o;
}

void	Victim::getPolymorphed(void) const{
	std::cout<<_name<<" has been turned into a cute little sheep !"<<std::endl;
}

Victim::~Victim(void){
		std::cout<<"Victim "<<_name<<" just died for no apparent reason !"<<std::endl;
}