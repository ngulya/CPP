// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 15:07:43 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 15:07:44 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <ostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
public:
	Sorcerer(void);
	Sorcerer(std::string n, std::string t);
	Sorcerer(Sorcerer const &rhs);
	~Sorcerer(void);
Sorcerer 	&operator=(Sorcerer const &rhs);
void polymorph(Peon const &r) const;
void polymorph(Victim const &r) const;
std::string	getTitle(void) const;
std::string	getName(void) const;
private:
	std::string	_name;
	std::string	_title;
};
std::ostream	&operator<<(std::ostream &o, Sorcerer const &i);


#endif