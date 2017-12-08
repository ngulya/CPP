// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 16:46:42 by ngulya            #+#    #+#             //
//   Updated: 2017/11/07 16:46:43 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef  PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	int		_sign;
	int		_exec;

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &s);
	~PresidentialPardonForm(void);
	int		getSign(void) const;
	int		getExec(void) const;
virtual void			execute(Bureaucrat const & executor) const;
PresidentialPardonForm 	&operator=(PresidentialPardonForm const &s);
	
};


#endif