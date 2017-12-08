// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 18:36:49 by ngulya            #+#    #+#             //
//   Updated: 2017/11/07 18:36:49 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Intern.hpp"

Intern::Except::Except(){
	std::cout<<"Bad name fucntion"<<std::endl;
}

Intern::Intern() {}

Intern::Intern(Intern const &r){
	*this = r;
}

Intern::~Intern(){}

Form	*Intern::makeForm(std::string f, std::string target){

	if(f == "robotomy request"){
		RobotomyRequestForm r(target);
		return r.ptr();
	}

	if(f == "presidential pardon"){
		PresidentialPardonForm r(target);
		return r.ptr();
	}

	if(f == "shrubbery creation"){
		ShrubberyCreationForm r(target);
		return r.ptr();
	}
	throw(Except());
}

Intern 		&Intern::operator=(Intern const &r){
	Intern i(r);
	return *this;
}