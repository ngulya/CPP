// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 19:31:59 by ngulya            #+#    #+#             //
//   Updated: 2017/11/03 19:32:00 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "FragTrap.hpp"

int 	main(void)
{
	FragTrap me;
	FragTrap b1("Bliznec1", 100, 75, 16, 50, 50, 50);
	FragTrap b2("Bliznec2");

	b2 = b1;
	b1.vaulthunter_dot_exe(me.getname());
	me.takeDamage(25);

	b2.vaulthunter_dot_exe(me.getname());
	me.takeDamage(25);

	me.vaulthunter_dot_exe(b1.getname());
	b1.takeDamage(25);

	me.rangedAttack(b1.getname());
	b1.takeDamage(me.getrDam());
	b1.beRepaired(10);
	b2.beRepaired(10);
	b1.vaulthunter_dot_exe(me.getname());
	me.takeDamage(25);
	b1.vaulthunter_dot_exe(me.getname());
	me.takeDamage(25);
	b2.vaulthunter_dot_exe(me.getname());
	me.takeDamage(25);
	me.rangedAttack(b1.getname());
	b2.takeDamage(me.getrDam());
	me.rangedAttack(b2.getname());
	b2.takeDamage(me.getrDam());
	
	std::cout<<(b1.getHP() != 0 ?"WINNER ":"Loser ")<<b1.getname()<<" have"<<b1.getHP()<<std::endl;
	std::cout<<(b2.getHP() != 0 ?"WINNER ":"Loser ")<<b2.getname()<<" have"<<b2.getHP()<<std::endl;
	std::cout<<(me.getHP() != 0 ?"WINNER ":"Loser ")<<me.getname()<<" have"<<me.getHP()<<std::endl;
	return 0;
}