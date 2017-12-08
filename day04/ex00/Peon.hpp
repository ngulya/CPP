// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 15:08:04 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 15:08:04 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim
{
public:
	Peon(void);
	Peon(std::string n);
	Peon(Peon const &rhs);
std::string	getName() const;
	~Peon(void);
virtual void	getPolymorphed(void) const;
Peon &operator=(Peon const &rhs);
};

std::ostream	&operator<<(std::ostream &o, Peon const &rhs);

#endif