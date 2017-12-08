// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/30 15:41:43 by ngulya            #+#    #+#             //
//   Updated: 2017/10/30 15:41:46 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Phonebook.class.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

int main(void)
{
	Phonebook 			a;
	std::string		command;
	int				index;

	index = -1;
	while(1)
	{
		std::getline(std::cin, command);
		a.error();
		if(command == "SEARCH")
		{
			a.SEARCH();
			if(a.now_num >= 0)
			{
				std::cout<<"index:";
				std::getline(std::cin, command);
				index = atoi(command.c_str());
				a.FIND(index);
			}	
		}
		else if(command == "ADD")
			a.ADD();
		else if(command == "relax")
			a.tmp();
		else if(command == "EXIT")
			break;
		else
			std::cout<<"EXIT/SEARCH/ADD/relax"<<std::endl;
	}
	return 0;
}
