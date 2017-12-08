// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 19:57:33 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 19:57:34 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string n, Weapon &w);
	~HumanA();
	void	attack(void);
private:
	Weapon		*_weapon;
	std::string	_name;
};


#endif