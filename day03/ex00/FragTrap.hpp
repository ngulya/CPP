// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 19:31:49 by ngulya            #+#    #+#             //
//   Updated: 2017/11/03 19:31:50 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap
{
public:
			FragTrap(void);
			FragTrap(std::string n);
			FragTrap(std::string n, int mhp, int mep, int lvl, int mdam, int rdam, int armor);
			FragTrap(FragTrap const &src);
			~FragTrap();
FragTrap	&operator=(FragTrap const &src);	
void		rangedAttack(std::string const & target);
void		meleeAttack(std::string const & target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amount);
void		vaulthunter_dot_exe(std::string const & target);
void		Die(void);
unsigned int	getHP(void) const;
unsigned int	getmHP(void) const;
unsigned int	getEP(void) const;
unsigned int	getmEP(void) const;
unsigned int	getLvl(void) const;
unsigned int	getmDam(void) const;
unsigned int	getrDam(void) const;
unsigned int	getArmor(void) const;
std::string		getname(void) const;

protected:
	unsigned int		_HP;
	unsigned int		_mHP;
	unsigned int 		_EP;
	unsigned int 		_mEP;
	unsigned int 		_Lvl;
	std::string			_name;
	unsigned int 		_mDam;
	unsigned int 		_rDam;
	unsigned int 		_Armor;
};


#endif