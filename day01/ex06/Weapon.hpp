// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 19:57:21 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 19:57:22 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
public:
	
	Weapon(std::string n);
	~Weapon();
	const std::string &getType(void);
	void	setType(std::string n);
private:
	std::string	_name;
};


#endif