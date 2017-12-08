// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 18:33:21 by ngulya            #+#    #+#             //
//   Updated: 2017/11/01 18:33:21 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"
# include <iostream>

class Human
{
public:
	Brain	getBrain(void);
	Human();
	~Human();
	std::string		identify(void);
private:
	Brain 	br;
	std::string	 	_adress;
};


#endif