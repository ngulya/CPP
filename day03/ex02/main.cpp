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
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int 	main(void)
{

	ScavTrap ZORK("ZORK", 50, 50, 1, 100, 100, 1);
	FragTrap me;
	FragTrap b1("Bliznec1", 100, 75, 16, 50, 50, 50);
	ClapTrap b2("Bliznec2", 100, 75, 16, 50, 50, 50);
	std::cout<<std::endl;
	std::cout<<"Battle num 1."<<std::endl;

	b1.vaulthunter_dot_exe(me.getname());
	me.takeDamage(25);

	b2.meleeAttack(me.getname());
	me.takeDamage(b2.getmDam());

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
	b2.meleeAttack(me.getname());
	me.takeDamage(b2.getmDam());
	me.rangedAttack(b1.getname());
	b2.takeDamage(me.getrDam());
	me.rangedAttack(b2.getname());
	b2.takeDamage(me.getrDam());
	
	std::cout<<(b1.getHP() != 0 ?"WINNER ":"Loser ")<<b1.getname()<<" have"<<b1.getHP()<<std::endl;
	std::cout<<(b2.getHP() != 0 ?"WINNER ":"Loser ")<<b2.getname()<<" have"<<b2.getHP()<<std::endl;
	std::cout<<(me.getHP() != 0 ?"WINNER ":"Loser ")<<me.getname()<<" have"<<me.getHP()<<std::endl;
	std::cout<<std::endl;
	std::cout<<"Battle num 2."<<std::endl;
	ZORK.challengeNewcomer(me.getname());
	me.takeDamage(25);
	
	ZORK.challengeNewcomer(me.getname());
	me.takeDamage(25);

	me.rangedAttack(ZORK.getname());
	ZORK.takeDamage(25);
	me.rangedAttack(ZORK.getname());
	ZORK.takeDamage(25);

	ZORK.rangedAttack(me.getname());
	me.takeDamage(ZORK.getrDam());
	ZORK.rangedAttack(me.getname());
	me.takeDamage(ZORK.getrDam());
	ZORK.rangedAttack(me.getname());
	me.takeDamage(ZORK.getrDam());

	me.rangedAttack(ZORK.getname());
	ZORK.takeDamage(me.getrDam());
	std::cout<<(me.getHP() != 0 ?"WINNER ":"Loser ")<<me.getname()<<" have"<<me.getHP()<<std::endl;
	std::cout<<(ZORK.getHP() != 0 ?"WINNER ":"Loser ")<<ZORK.getname()<<" have"<<ZORK.getHP()<<std::endl;
	return 0;
}