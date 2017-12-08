// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/09 19:04:23 by ngulya            #+#    #+#             //
//   Updated: 2017/11/09 19:04:24 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Array.hpp"

int		main(void)
{
	Array <int> b;

	try{
		b[5];
	}
	catch(std::exception &e){
		;
	}

	std::cout<<std::endl;
	Array <int> a(4);
	a.printArr();
	a[1] = 65;
	a[2] = 66;
	a.printArr();
	try{
		a[5];
	}
	catch(std::exception &e){
		;
	}
	return 0;
}