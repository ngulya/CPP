// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 17:16:07 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 17:16:07 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include <ostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
				PowerFist(void);
				PowerFist(PowerFist const &rhs);
				~PowerFist(void);
virtual	void	attack(void) const;

PowerFist			&operator=(PowerFist const &rhs);
};

// std::ostream	&operator<<(std::ostream &o, PowerFist const &rhs);

#endif