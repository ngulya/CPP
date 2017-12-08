// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 19:12:25 by ngulya            #+#    #+#             //
//   Updated: 2017/10/31 19:12:27 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Pony.hpp"

Pony::Pony(int w, int h, std::string n){
	this->_weight = w;
	this->_height = h;
	this->name = n;
	return;
}

Pony::~Pony(void){
	return;
}

void	Pony::name_pony(void){
	std::cout<<"Pony named: "<<name<<std::endl;
	return;
}
void	Pony::w_h_pony(void){
	std::cout<<"Pony weight: "<<_weight<<"   height: "<<_height<<std::endl;
	return;
}

void	ponyOnTheStack(int w, int h, std::string n)
{
	Pony 	p = Pony(w, h, n);
	std::cout<<"ponyOnTheStack"<<std::endl;
	p.name_pony();
	p.w_h_pony();
	std::cout<<std::endl;
}

void	ponyOnTheHeap(int w, int h, std::string n)
{
	Pony* 	p = new Pony(w, h, n);
	std::cout<<"ponyOnTheHeap"<<std::endl;
	(*p).name_pony();
	(*p).w_h_pony();
	delete p;
}