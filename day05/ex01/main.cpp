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
#include "Form.hpp"

int 	main(void)
{

	Form 		forb1("forb1", 150);
	Bureaucrat	b1("b1", 150);
	std::cout<<b1;
	std::cout<<forb1;
	std::cout<<std::endl;
	try{
		std::cout<<"b1 grade + 1"<<std::endl;
		b1++;
	}
	catch(Bureaucrat::GradeTooLowException & e){
		;
	}
	catch(Bureaucrat::GradeTooHighException & e){
		;
	}
	std::cout<<std::endl;
	forb1.beSigned(b1);
	std::cout<<forb1;
	std::cout<<std::endl;
	Form 		forb2("forb2", 125);
	std::cout<<forb2;
	std::cout<<"b1 cant grade forb2"<<std::endl;
	try{
		forb2.beSigned(b1);
	}
	catch(Form::GradeTooLowException & e){
		;
	}
	catch(Form::GradeTooHighException & e){
		;
	}
	return 0;
}