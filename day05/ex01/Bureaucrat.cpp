// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 15:11:06 by ngulya            #+#    #+#             //
//   Updated: 2017/11/06 15:11:07 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Dora"), _grade(13){}



Bureaucrat::GradeTooHighException::GradeTooHighException(void){
	std::cout<<"Grade Too High"<<std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void){
	std::cout<<"Grade Too Low"<<std::endl;
}

int				Bureaucrat::signForm(int g, std::string name) const{
	if(_grade <= g)
	{
		std::cout<<"<"<<_name<<"> signs <"<<name<<">"<<std::endl;
		return 1;
	}
	std::cout<<"<"<<_name<<"> cannot sign <"<<name<<"> cause small grade"<<std::endl;
	return 0;
}


Bureaucrat::Bureaucrat(std::string n, int i): _name(n){
		if(i > 150)
			throw(GradeTooLowException());
		else if(i < 1)
			throw(GradeTooHighException());
		else
			_grade = i;
}

std::string		Bureaucrat::getName(void) const{
	return _name;
}

int				Bureaucrat::getGrade(void) const{
	return _grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs){
	_grade = rhs.getGrade();
	const_cast<std::string&>((this)->_name) = rhs.getName();
	return *this;
}

Bureaucrat	Bureaucrat::operator--(int)  {
	if(_grade <= 1) {
		GradeTooHighException ex;
		throw(ex);
	}
	Bureaucrat b = *this;
	++this->_grade;
	return (b);
}

void		Bureaucrat::grade_plus(void){
	_grade++;
}

void		Bureaucrat::grade_minus(void){
	_grade--;
}


Bureaucrat	&Bureaucrat::operator--(void)  {
	if(_grade <= 1) {
		GradeTooHighException ex;
		throw(ex);
	}
	++this->_grade;
	return(*this);
}

Bureaucrat	Bureaucrat::operator++(int )  {
	if(_grade >= 150)
	{
		GradeTooLowException ex;
		throw(ex);
	}
	Bureaucrat b = *this;
	--this->_grade;
	return (b);
}

Bureaucrat	&Bureaucrat::operator++(void)  {
	if(_grade >= 150)
	{
		GradeTooLowException ex;
		throw(ex);
	}
	--this->_grade;
	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs){
	*this = rhs;
}

Bureaucrat::~Bureaucrat(void){}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs){
	return o<<"<"<<rhs.getName()<<">, bureaucrat grade "<<rhs.getGrade()<<std::endl;
}