// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phonebook.class.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/30 15:41:52 by ngulya            #+#    #+#             //
//   Updated: 2017/10/30 15:41:54 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <iomanip>
#include "Phonebook.class.hpp"

People::People(void){

	return;
}

People::~People(void){

	return;
}

Phonebook::Phonebook(void):now_num(-1){

	return;
}

Phonebook::~Phonebook(void){
	return;
}
void	Phonebook::tmp(void)
{
	if(this->now_num > 4)
		return;
	this->now_num++;
	num[this->now_num].first_name = "nazarrrrr";
	num[this->now_num].last_name = "ggggggggg";
	num[this->now_num].nickname = "n_b";
	num[this->now_num].login = "nana1";
	num[this->now_num].postal = "bona1";
	this->now_num++;
	num[this->now_num].first_name = "maxim";
	num[this->now_num].last_name = "oborois";
	num[this->now_num].nickname = "onsooos";
	num[this->now_num].login = "timka";
	num[this->now_num].postal = "020093";
	this->now_num++;
	num[this->now_num].first_name = "ivan";
	num[this->now_num].last_name = "biris";
	num[this->now_num].nickname = "n-bazik";
	num[this->now_num].login = "ngulya3";
	num[this->now_num].postal = "sss";
}

void	Phonebook::error(void){
	if(std::cin.eof()){
		std::cout<<"DONT DO THIS AGAIN"<<std::endl;
		exit(2);	
	}
}

int 	Phonebook::ADD(void){
	if(this->now_num >= 7)
	{
		std::cout<<"We have already 8 contacts, you can EXIT or SEARCH"<<std::endl;
		return 0;
	}
	this->now_num += 1;

	std::cout<<"First name: ";
	std::getline(std::cin, num[this->now_num].first_name);
	error();
	std::cout<<"Last name: ";
	std::getline(std::cin, num[this->now_num].last_name);
	error();
	std::cout<<"Nickname: ";
	std::getline(std::cin, num[this->now_num].nickname);
	error();
	std::cout<<"Login: ";
	std::getline(std::cin, num[this->now_num].login);
	error();
	std::cout<<"Postal Index: ";
	std::getline(std::cin, num[this->now_num].postal);
	error();
	std::cout<<"Email: ";
	std::getline(std::cin, num[this->now_num].email);
	error();
	std::cout<<"Phone number: ";
	std::getline(std::cin, num[this->now_num].phone);
	error();
	std::cout<<"Birthday date: ";
	std::getline(std::cin, num[this->now_num].data);
	error();
	std::cout<<"Favorite meal: ";
	std::getline(std::cin, num[this->now_num].meal);
	error();
	std::cout<<"Underwear color: ";
	std::getline(std::cin, num[this->now_num].underwear);
	error();
	std::cout<<"Darkest secret: ";
	std::getline(std::cin, num[this->now_num].secret);
	error();
	return 1;
}

void	People::output_inf(void){
	std::cout<<"First name: "<<first_name<<std::endl;
	std::cout<<"Last name: "<<last_name<<std::endl;
	std::cout<<"Nickname: "<<nickname<<std::endl;
	std::cout<<"Login: "<<login<<std::endl;
	std::cout<<"Postal Index: "<<postal<<std::endl;
	std::cout<<"Email: "<<email<<std::endl;
	std::cout<<"Phone number: "<<phone<<std::endl;
	std::cout<<"Birthday date: "<<data<<std::endl;
	std::cout<<"Favorite meal: "<<meal<<std::endl;
	std::cout<<"Underwear color: "<<underwear<<std::endl;
	std::cout<<"Darkest secret: "<<secret<<std::endl;
}

int	 	Phonebook::FIND(int index){
	int i;

	i = index - 1 ;
	if(i >= 0 && i <= now_num)
		num[i].output_inf();
	else
		std::cout<<"No correct index"<<std::endl;
	return 0;
}


void 	Phonebook::SEARCH(void){
	int			i;
	std::string	tmp;
	i = 0;
	if(this->now_num < 0)
		return;
	while(i <= this->now_num)
	{

		std::cout<<std::setw(10);
		std::cout<<i + 1 << "|";
		std::cout<<std::setw(10);
		if(num[i].postal.size() > 10)
		{
			tmp = num[i].postal.substr(0, 9);
			tmp += '.';
			std::cout<<tmp;
		}
		else
			std::cout<<num[i].postal;
		std::cout<<"|";
	
		std::cout<<std::setw(10);
		if(num[i].first_name.size() > 10)
		{
			tmp = num[i].first_name.substr(0, 9);
			tmp += '.';
			std::cout<<tmp;
		}
		else
			std::cout<<num[i].first_name;
		std::cout<<"|";
	
		std::cout<<std::setw(10);
		if(num[i].last_name.size() > 10)
		{
			tmp = num[i].last_name.substr(0, 9);
			tmp += '.';
			std::cout<<tmp;
		}	
		else
			std::cout<<num[i].last_name;
		std::cout<<"|";
		
		std::cout<<std::setw(10);
		if(num[i].nickname.size() > 10)
		{
			tmp = num[i].nickname.substr(0, 9);
			tmp += '.';
			std::cout<<tmp;
		}
		else
			std::cout<<num[i].nickname;
		std::cout<<"|";
		std::cout<<num[i].meal;
		std::cout<<std::endl;
		i++;
	}
}
