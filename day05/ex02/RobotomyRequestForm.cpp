// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 16:39:38 by ngulya            #+#    #+#             //
//   Updated: 2017/11/07 16:39:38 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): _sign(72), _exec(45){}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _sign(72), _exec(45){
	system("say pipipipipipipitrr");
		if(rand() % 2)
			std::cout<<"<"<<target<<"> has been robotomized successfully.";
		else
			std::cout<<"<"<<target<<"> has been robotomized with fail.";
	std::cout<<std::endl;
	setGrade(_sign);
	setName("RobotomyRequestForm");
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &s){
	*this = s;
}

int		RobotomyRequestForm::getSign(void) const{
	return _sign;
}

int		RobotomyRequestForm::getExec(void) const{
	return _exec;
}

void			RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if(executor.getGrade() <= _sign)
		executor.executeRobot(*this);
	else
		throw(CannotExecute());
}

RobotomyRequestForm 	&RobotomyRequestForm::operator=(RobotomyRequestForm const &s){
	_sign = s.getSign();
	_exec = s.getExec();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void){}
