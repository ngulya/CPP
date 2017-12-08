// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 21:35:12 by ngulya            #+#    #+#             //
//   Updated: 2017/11/03 21:35:13 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.hpp"
# include <iostream>
# include <stdlib.h>

class ScavTrap : public FragTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string n);
	ScavTrap(std::string n, int mhp, int mep, int lvl, int mdam, int rdam, int armor);
	~ScavTrap(void);
	ScavTrap(ScavTrap const &src);
ScavTrap 	&operator=(ScavTrap const &src);
void		challengeNewcomer(std::string const & target);
};

#endif