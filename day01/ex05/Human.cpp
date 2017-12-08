// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 18:33:13 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 18:33:14 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Brain.hpp"
#include "Human.hpp"
#include <sstream>
Human::Human(){
	return;
}

std::string	Human::identify(void)
{
	std::stringstream str;
	str<<std::hex<<&this->br;
	std::string res(str.str());
	return res;
}

Brain	Human::getBrain(void){
	return this->br;
}

Human::~Human(void){
	return;
}