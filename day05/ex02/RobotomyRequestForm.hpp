// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 16:39:42 by ngulya            #+#    #+#             //
//   Updated: 2017/11/07 16:39:43 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef  ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	int		_sign;
	int		_exec;

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &s);
	~RobotomyRequestForm(void);
	int		getSign(void) const;
	int		getExec(void) const;
	void			execute(Bureaucrat const & executor) const;
RobotomyRequestForm 	&operator=(RobotomyRequestForm const &s);
	
};


#endif