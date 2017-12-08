// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 19:01:27 by ngulya            #+#    #+#             //
//   Updated: 2017/11/06 19:01:27 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
private:
	bool		_signed;
	std::string	_name;
	int			_grade;
public:
				Form(void);
				Form(std::string n, int grade);
				Form(Form const &f);
				~Form(void);
Form			&operator=(Form const &f);
std::string		getName(void) const;
int				getGrade(void) const;
bool			getSigned(void) const;
void			beSigned(Bureaucrat const &r);

	class GradeTooHighException : std::exception
	{
	public:
		GradeTooHighException();
	};
	class GradeTooLowException : std::exception
	{
	public:
		GradeTooLowException();
	};
};

std::ostream	&operator<<(std::ostream &o, Form const &f);

#endif