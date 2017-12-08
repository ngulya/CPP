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
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
			FragTrap(void);
			FragTrap(std::string n);
			FragTrap(std::string n, int mhp, int mep, int lvl, int mdam, int rdam, int armor);
			FragTrap(FragTrap const &src);
			~FragTrap();
FragTrap	&operator=(FragTrap const &src);	
void		vaulthunter_dot_exe(std::string const & target);

};


#endif