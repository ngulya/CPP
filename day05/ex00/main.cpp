// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 15:11:13 by ngulya            #+#    #+#             //
//   Updated: 2017/11/06 15:11:14 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Bureaucrat.hpp"


int 	main(void)
{
	Bureaucrat b1("b1", 150);
	std::cout<<b1;
	std::cout<<"Now we ++b"<<std::endl;
	try{
		b1++;
	}
	catch(std::exception & e){
		;
	}
	std::cout<<std::endl;
	Bureaucrat b2("b2", 1);
	std::cout<<b2;
	std::cout<<"Now we --b"<<std::endl;
	try{
		--b2;
	}
	catch(std::exception & e){
		;
	}
	return 0;
}