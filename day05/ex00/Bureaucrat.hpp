// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 15:10:59 by ngulya            #+#    #+#             //
//   Updated: 2017/11/06 15:10:59 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
// #include <stdexcept>

class Bureaucrat
{
private:
	std::string const 	_name;
	int					_grade;	
public:
class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
	};
class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
	};

	Bureaucrat(void);
	Bureaucrat(std::string n, int i);
	Bureaucrat(Bureaucrat const &rhs);
	~Bureaucrat(void);
	Bureaucrat	operator++(int);
	Bureaucrat	&operator++(void);
	Bureaucrat	operator--(int);
	Bureaucrat	&operator--(void);
Bureaucrat		&operator=(Bureaucrat const &rhs);
std::string		getName(void) const;
int				getGrade(void) const;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
