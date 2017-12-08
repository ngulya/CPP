// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 15:07:51 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 15:07:51 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim
{
protected:
	std::string	_name;
public:
	Victim(void);
	Victim(std::string n);
	Victim(Victim const &rhs);
	~Victim(void);
Victim 	&operator=(Victim const &rhs);
std::string	getName(void) const;
virtual void	getPolymorphed(void) const;

};

std::ostream	&operator<<(std::ostream &o, Victim const &rhs);

#endif