// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:20:12 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:20:12 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
	int			_HP;
	std::string	_type;
	// std::string	_alive;
	std::string	_die;
public:
				Enemy(void);
				Enemy(int hp, std::string const & type);
				Enemy(Enemy const &rhs);
				~Enemy(void);

std::string		getType(void) const;
int				getHP(void) const;
virtual	void 	takeDamage(int i);

Enemy		&operator=(Enemy const &rhs);
};

#endif