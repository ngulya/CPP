// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 18:33:06 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 18:33:06 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_HPP
# define BRAIN_HPP
/*# include "Human.hpp"*/
# include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	std::string	identify(void);
private:
	std::string	_adr;
	int		_iq;	
};


#endif