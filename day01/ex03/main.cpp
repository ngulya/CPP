// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 14:59:50 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 14:59:51 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <stdlib.h>
#include <vector>


int		main(void)
{
	int						N;
	std::string				str;

	N = 0;
	std::cout<<"Num of Zomb: ";
	std::getline(std::cin, str);
	N = atoi(str.c_str());
	if(N < 1)
	{
		std::cout<<"Are you seriously?"<<std::endl;
		return 1;
	}
	if(N > 50)
	{
		std::cout<<"I dont wont 50 times news"<<std::endl;
		return 1;
	}
	ZombieHorde zom((const int )(N));
	return 0;
}