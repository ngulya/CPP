// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 18:36:56 by ngulya            #+#    #+#             //
//   Updated: 2017/11/07 18:36:57 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	class Except : std::exception
	{
		public:
			Except();
	};
	Form	*makeForm(std::string f, std::string target);
	Intern();
	Intern(Intern const &r);
Intern 		&operator=(Intern const &r);
	~Intern();
	
};

#endif