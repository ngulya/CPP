// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 18:32:58 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 18:32:58 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Brain.hpp"
#include "Human.hpp"
#include <sstream>

Brain::Brain(){
	_iq = 169;
	std::stringstream str;
	str<<std::hex<<this;
	std::string res(str.str());
	_adr = res;
	return;
}

std::string		Brain::identify(void){
	return _adr;
}

Brain::~Brain(void){
	return;
}