// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 14:59:43 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 14:59:43 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent(void);
	~ZombieEvent(void);
	int		setZombieType(void);
	void	error(void);
	Zombie* newZombie(std::string name);
	std::string	randomChump(void);
	int		stack;
	int		heap;
private:
	std::string _no_rand[10];
};

#endif