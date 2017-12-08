// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 16:13:59 by ngulya            #+#    #+#             //
//   Updated: 2017/11/07 16:14:00 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): _sign(145), _exec(137){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _sign(145), _exec(137){
		std::ofstream f;
		std::string s;

		s = target+"_shrubbery";
		f.open(s);
		f<<"   #\n";
		f<<"  ###\n";
		f<<" #####\n";
		f<<"#######\n";
		f<<"   $\n";
		f<<"   $\n";
		f.close();
		setGrade(_sign);
		setName("ShrubberyCreationForm");
}

void			ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if(executor.getGrade() <= _sign)
		executor.executeSh(*this);
	else
		throw(CannotExecute());
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &s){
	*this = s;
}



int		ShrubberyCreationForm::getSign(void) const{
	return _sign;
}

int		ShrubberyCreationForm::getExec(void) const{
	return _exec;
}

ShrubberyCreationForm 	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &s){
	_sign = s.getSign();
	_exec = s.getExec();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){}
