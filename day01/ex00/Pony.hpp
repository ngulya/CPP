// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 19:12:35 by ngulya            #+#    #+#             //
//   Updated: 2017/10/31 19:12:36 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_H
# define PONY_H
# include <iostream>

class Pony
{
public:
	std::string	name;
	Pony(int w, int h, std::string n);
	void	name_pony(void);
	void	w_h_pony(void);
	~Pony(void);
private:
	int	_weight;
	int	_height;
};
void	ponyOnTheHeap(int w, int h, std::string n);
void	ponyOnTheStack(int w, int h, std::string n);


#endif