// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phonebook.class.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/30 15:41:59 by ngulya            #+#    #+#             //
//   Updated: 2017/10/30 15:42:03 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include <iostream>
# include <iomanip>

class People{

public:
	People(void);
	~People(void);
	void output_inf(void);
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal;
	std::string email;
	std::string phone;
	std::string data;
	std::string meal;
	std::string underwear;
	std::string secret;
};

class Phonebook{

public:
	int		now_num;
	People	num[8];
	Phonebook(void);
	~Phonebook(void);
	void tmp(void);
	void error(void);
	int	ADD(void);
	void SEARCH(void);
	int FIND(int index);
};

#endif
