// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 16:49:51 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 16:49:52 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
# include <ostream>

class AWeapon
{
protected:
	std::string _name;
	int			_nDam;
	int			_AP;
public:
				AWeapon(void);
				AWeapon(std::string const & name, int ap, int dam);
				AWeapon(AWeapon const &rhs);
				~AWeapon(void);
virtual	void	attack(void) const = 0;
int				getAPCost() const;
int				getDamage() const;
std::string		getName() const;
AWeapon			&operator=(AWeapon const &rhs);
};

std::ostream	&operator<<(std::ostream &o, AWeapon const &rhs);

#endif