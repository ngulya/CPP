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

Zombie::Zombie(std::string n): _name(n){
	announce();
	return;
}

void	Zombie::announce(void){
	std::cout<<"<"<<_name;
	std::cout<<"(heap)>";
	std::cout<<"Braiiiiiiinnnssss..."<<std::endl;
}
Zombie::~Zombie()
{
	std::cout<<"<"<<_name;
	std::cout<<"(heap)>";
	std::cout<<"I'm di..die......"<<std::endl;
	return ;
}
