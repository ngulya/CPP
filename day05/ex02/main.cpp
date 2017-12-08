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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int 	main(void)
{
	Bureaucrat	b1("b1", 150);
	std::cout<<"New file L_Shrubbery"<<std::endl;;
	ShrubberyCreationForm s("L");

	std::cout<<"Cannot execute , Bureaucrat(150), Shrubbery(145)"<<std::endl;;
	try{
		s.execute(b1);
	}
	catch(Form::CannotExecute & e){
		std::cout<<"(up)Catch"<<std::endl;;;
	}
	std::cout<<"New Bureaucrat(140) can sign but not execute"<<std::endl;
	Bureaucrat	b2("b2", 140);
	s.beSigned(b2);
	try{
		s.execute(b2);
	}
	catch(Form::CannotExecute & e){
		std::cout<<"(up)Catch"<<std::endl;;;
	}
	Bureaucrat	b3("b3", 130);
	ShrubberyCreationForm s1("L");
	s1.beSigned(b3);
	s1.execute(b3);
	std::cout<<"President"<<std::endl;;;
	PresidentialPardonForm p1("President");
	Bureaucrat	aaa("highlevel Buric", 1);
	p1.beSigned(aaa);
	p1.execute(aaa);
	PresidentialPardonForm p2("President2");
	Bureaucrat	a1("highlevel Buric", 27);
	std::cout<<"Cannot execute , Bureaucrat(27), Shrubbery(5)"<<std::endl;;
	try{
		p2.execute(a1);
	}
	catch(Form::CannotExecute & e){
		std::cout<<"(up)Catch"<<std::endl;;;
	}
	RobotomyRequestForm r("Rob");
	return 0;
}