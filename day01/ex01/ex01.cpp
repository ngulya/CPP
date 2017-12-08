// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 14:32:18 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 14:32:18 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

void memoryLeak(void)
{
	std::string*        panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
