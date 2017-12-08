// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 22:05:52 by ngulya            #+#    #+#             //
//   Updated: 2017/11/03 22:05:52 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string n);
	ClapTrap(std::string n, int mhp, int mep, int lvl, int mdam, int rdam, int armor);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();
ClapTrap	&operator=(ClapTrap const &src);

void		Die(void);
void		rangedAttack(std::string const & target);
void		meleeAttack(std::string const & target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amount);
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