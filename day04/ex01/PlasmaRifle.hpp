// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:08:05 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:08:05 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include <ostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
				PlasmaRifle(void);
				PlasmaRifle(PlasmaRifle const &rhs);
				~PlasmaRifle(void);
virtual	void	attack(void) const;

PlasmaRifle			&operator=(PlasmaRifle const &rhs);
};

// std::ostream	&operator<<(std::ostream &o, PlasmaRifle const &rhs);

#endif