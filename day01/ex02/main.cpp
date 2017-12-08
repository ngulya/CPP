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
#include "ZombieEvent.hpp"
#include <iostream>
#include <stdlib.h>
#include <vector>


int		main(void)
{
	std::vector<Zombie*>	heap;
	Zombie 					stack[100];
	ZombieEvent				z;
	std::string				str;
	int						i;

	i = 0;
	while(1)
	{
		if(!z.setZombieType())
		{
			break ;
		}
		if(z.heap == 1)
			heap.push_back(z.newZombie(z.randomChump()));
		else if(z.stack == 1)
		{
			if(i >= 100)
			{
				std::cout<<"Enough"<<std::endl;
				break;
			}
			stack[i].set_name(z.randomChump());
			i++;
		}
	}
	if(heap.size() > 0)
		std::cout<<"i'm delete all heap"<<std::endl;
	while(heap.size() > 0)
	{
		delete heap[heap.size()-1];
		heap.pop_back();
	}
	if(i > 0)
		std::cout<<"Someone delete all stack"<<std::endl;
	return 0;
}