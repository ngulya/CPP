// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:42:53 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:42:54 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>

class Character
{
private:
	int			_AP;
	std::string	_name;
	AWeapon*	_weapon;//========
public:
			Character(void);
			Character(Character const &rhs);
			Character(std::string const & name);
			~Character(void);
void		recoverAP(void);
void		equip(AWeapon* a);
void		attack(Enemy* a);
int			getAP(void) const;
std::string	getName(void) const;
int			have_weapon(void) const;
Character 	&operator=(Character const &rhs);
AWeapon*	getWeapon(void) const;
};

std::ostream	&operator<<(std::ostream &o, Character const &rhs);

#endif