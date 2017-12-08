// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:39:39 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:39:40 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
				RadScorpion(void);
				RadScorpion(RadScorpion const &rhs);
				~RadScorpion(void);
virtual	void 	takeDamage(int i);
RadScorpion 	&operator=(RadScorpion const &rhs);
};

#endif