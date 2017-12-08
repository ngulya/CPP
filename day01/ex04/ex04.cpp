// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 18:22:21 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 18:22:22 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int		main(void)
{
	std::string		std = "HI THIS IS BRAIN";
	std::string		*st1 = &std;
	std::string		&st2 = std;
	
	std::cout<<*st1<<std::endl;
	std::cout<<st2<<std::endl;
	return 0;
}