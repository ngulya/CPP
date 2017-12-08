// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 14:59:36 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 14:59:36 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <stdlib.h>

ZombieEvent::ZombieEvent(void):stack(0), heap(0){
	_no_rand[0] = "hahaha";
	_no_rand[1] = "OGUREC";
	_no_rand[2] = "typoy_";
	_no_rand[3] = "YmnuY";
	_no_rand[4] = "Sredniy";
	_no_rand[5] = "zElEniy";
	_no_rand[6] = "zimboOOO";
	_no_rand[7] = "printf";
	_no_rand[8] = "Jjjmin";
	_no_rand[9] = "kormd";
	return;
}

ZombieEvent::~ZombieEvent(){
	return;
}

Zombie* ZombieEvent::newZombie(std::string name){
	Zombie *z = new Zombie(name, 0, 1);
	return z;
}

std::string	ZombieEvent::randomChump(void)
{
	std::string		str;
	unsigned int 	t;

	t = (unsigned int)rand();
	std::cout<<"	Your name or rand name \"name\"/enter: ";
	std::getline(std::cin, str);
	error();
	if(str != "")
		return str;
	while(t > 10)
		t /= 10;
	if (t - 1 <= 9)
		return _no_rand[t - 1];
	return _no_rand[7];
}

void	ZombieEvent::error(void){
	if(std::cin.eof())
	{
		std::cout<<"DONT DO THIS AGAIN"<<std::endl;
		exit(2);
	}
}

int		ZombieEvent::setZombieType(void){
	stack = 0;
	heap = 0;
	std::string	str;
	std::cout<<"	set Zombie Type  stack/heap/exit: ";
	std::getline(std::cin, str);
	error();
	if(str == "stack")
		stack = 1;
	else if(str == "heap")
		heap = 1;
	else if(str == "exit")
		return 0;

	else
		std::cout<<"Try again"<<std::endl;
	return 1;
}
