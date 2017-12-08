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
#include "Intern.hpp"
int 	main(void)
{
	Intern i;
	Form *r;
	Form *p;
	Form *s;

	r = i.makeForm("robotomy request", "li1");
	s = i.makeForm("shrubbery creation", "li2");
	std::cout<<"li2 dont  print, cause he create file"<<std::endl;
	p = i.makeForm("presidential pardon", "li3");
	std::cout<<"Now we see Except"<<std::endl;
	try{
		i.makeForm("bullShit", "li3");
	}
	catch(Intern::Except &e){
		;
	}
	return 0;
}