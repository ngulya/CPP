// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 14:58:45 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 14:58:45 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
public:
	Zombie(void);
	Zombie(std::string n, int s, int h);
	~Zombie();
	void set_name(std::string s);
	void announce(void);
	int		stack;
	int		heap;
private:
	std::string _name;
};

#endif