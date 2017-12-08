// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 15:08:17 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 15:08:18 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <ostream>

int 	main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
     Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim<<joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}