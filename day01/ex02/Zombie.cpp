// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 14:57:10 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 14:57:10 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string n, int s, int h){
	_name = n;
	stack = s;
	heap = h;
	announce();
	return;
}

Zombie::Zombie(void): stack(0), heap(0){
	return;
}

void	Zombie::set_name(std::string s){
	_name = s;
	stack = 1;
	announce();
}

void	Zombie::announce(void){
	std::cout<<"<"<<_name;
	if(stack)
		std::cout<<"(stack)>";
	else
		std::cout<<"(heap)>";
	std::cout<<"Braiiiiiiinnnssss..."<<std::endl;
}
Zombie::~Zombie()
{
	if(stack == 1 || heap == 1)
	{
		std::cout<<"<"<<_name;
		if(stack)
			std::cout<<"(stack)>";
		else
			std::cout<<"(heap)>";
		std::cout<<"I'm di..die......"<<std::endl;
	}
	return ;
}
