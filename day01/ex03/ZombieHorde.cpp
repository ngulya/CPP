// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 17:56:13 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 17:56:14 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <stdlib.h>

void	ZombieHorde::get_name_in_rand(void){
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

Zombie* ZombieHorde::newZombie(std::string name){
	Zombie *z = new Zombie(name);
	return z;
}

ZombieHorde::ZombieHorde(int N)
{
	get_name_in_rand();
	while(N > 0)
	{
		z.push_back(newZombie(randomChump()));
		N--;
	}
}

ZombieHorde::~ZombieHorde(){
	std::cout<<"Now, I'm delete in destructor..."<<std::endl;
	while(z.size() > 0)
	{
		delete z[z.size()-1];
		z.pop_back();
	}
	return;
}


std::string	ZombieHorde::randomChump(void)
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

void	ZombieHorde::error(void){
	if(std::cin.eof())
	{
		std::cout<<"DONT DO THIS AGAIN"<<std::endl;
		exit(2);
	}
}

