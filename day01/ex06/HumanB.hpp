// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 19:57:46 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 19:57:46 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string n);
	~HumanB();
	void	setWeapon(Weapon &w);
	void	attack(void);
private:
	Weapon		*_weapon;
	std::string	_name;
};


#endif
