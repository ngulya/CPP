// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/02 14:56:18 by ngulya            #+#    #+#             //
//   Updated: 2017/11/02 14:56:18 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "simple.hpp"

int main(void)
{
	Sample i1;
	Sample i2(42);
	Sample i3(i1);

	std::cout<<i1<<std::endl;
	std::cout<<i2<<std::endl;
	std::cout<<i3<<std::endl;
	i3 = i2;
	std::cout<<i3<<std::endl;
	return 0;
}