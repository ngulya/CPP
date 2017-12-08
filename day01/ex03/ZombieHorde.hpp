// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 17:56:21 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 17:56:22 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include <iostream>
# include "Zombie.hpp"
# include <vector>

class ZombieHorde
{
public:
	ZombieHorde(int N);
	~ZombieHorde(void);
	void	error(void);
	void	get_name_in_rand(void);
	std::string	randomChump(void);
	Zombie* newZombie(std::string name);
	std::vector<Zombie*>	z;
private:
	std::string _no_rand[10];
};

#endif