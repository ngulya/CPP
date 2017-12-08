// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 19:01:19 by ngulya            #+#    #+#             //
//   Updated: 2017/11/06 19:01:20 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void){}

Form::Form(Form const &f){
	*this = f;
}

void		Form::beSigned(Bureaucrat const &r){

	if(!r.signForm(_grade, _name)){
		std::cout<<"jopa"<<std::endl;
		GradeTooHighException a;
		throw(a);
	}
	else
		_signed = true;
}

Form::Form(std::string n, int grade){
	if(grade > 150)
		throw(GradeTooLowException());
	else if(grade < 1)
		throw(GradeTooHighException());
	else
	{
		_signed = false;
		_name = n;
		_grade = grade;
	}
}
Form::GradeTooHighException::GradeTooHighException(){
	std::cout<<"Grade Too High"<<std::endl;
}
Form::GradeTooLowException::GradeTooLowException(){
	std::cout<<"Form grade Too Low"<<std::endl;
}

Form::~Form(void){}

Form			&Form::operator=(Form const &f){
	_signed = f.getSigned();
	_name = f.getName();
	_grade = f.getGrade();
	return *this;
}

std::string		Form::getName(void) const{
	return _name;
}
int				Form::getGrade(void) const{
	return _grade;
}

bool			Form::getSigned() const{
	return _signed;
}


std::ostream	&operator<<(std::ostream &o, Form const &f){
	return o<<"<"<<f.getName()<<">, Form grade: "<<f.getGrade()<<(f.getSigned() ? " <signed>" : " <unsigned>")<<std::endl;
}