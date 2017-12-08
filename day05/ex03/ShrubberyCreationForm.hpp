// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 16:14:04 by ngulya            #+#    #+#             //
//   Updated: 2017/11/07 16:14:04 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef  SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	int		_sign;
	int		_exec;

public:
	Form		*ptr();
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &s);
	~ShrubberyCreationForm(void);
	int		getSign(void) const;
	int		getExec(void) const;
	void			execute(Bureaucrat const & executor) const;
ShrubberyCreationForm 	&operator=(ShrubberyCreationForm const &s);
	
};


#endif