// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:30:16 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:30:17 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
				SuperMutant(void);
				SuperMutant(SuperMutant const &rhs);
				~SuperMutant(void);
virtual	void 	takeDamage(int i);
SuperMutant 	&operator=(SuperMutant const &rhs);
};

#endif