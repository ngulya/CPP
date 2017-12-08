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
#include "integer.hpp"

int main(int argc, char const *argv[])
{
	Integer x(30);
	Integer y(10);
	Integer z(0);

	// std::cout<<"Val of x: "<<x<<std::endl;
	// std::cout<<"Val of y: "<<y<<std::endl;
	// y = Integer(12);
	// std::cout<<"Val of y: "<<y<<std::endl;

	std::cout<<"Val of z: "<<z<<std::endl;
	z = x + y;
	std::cout<<"Val of z: "<<z<<std::endl;
	return 0;
}