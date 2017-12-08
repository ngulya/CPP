// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   test.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 14:22:57 by ngulya            #+#    #+#             //
//   Updated: 2017/11/04 14:22:58 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>

using namespace std;

class Good
{
public:
	virtual	 void	sayHello(string const &target);
	
};

class Bad : public Good
{
public:
	void	sayHello(string const &target);
	
};

void		Good::sayHello(string const &target)
{
	cout<<"Hello "<<target<<endl;
}

void		Bad::sayHello(string const &target)
{
	cout<<"Fuck off "<<target<<endl;
}


int main(int argc, char const *argv[])
{
	Bad * b = new Bad();

	Good * g = new	Bad();
	
	b->sayHello("student");
	g->sayHello("student");
	return 0;
}