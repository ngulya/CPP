// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 16:46:45 by ngulya            #+#    #+#             //
//   Updated: 2017/11/07 16:46:45 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): _sign(25), _exec(5){}

PresidentialPardonForm::PresidentialPardonForm(std::string target): _sign(25), _exec(5){
	std::cout<<"<"<<target<<"> has been pardoned by Zafod Beeblebrox"<<std::endl;;
	setGrade(_sign);
	setName("PresidentialPardonForm");
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &s){
	*this = s;
}

int		PresidentialPardonForm::getSign(void) const{
	return _sign;
}

int		PresidentialPardonForm::getExec(void) const{
	return _exec;
}

void			PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if(executor.getGrade() <= _sign)
		executor.executePresident(*this);
	else
		throw(CannotExecute());
}

PresidentialPardonForm 	&PresidentialPardonForm::operator=(PresidentialPardonForm const &s){
	_sign = s.getSign();
	_exec = s.getExec();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void){}
