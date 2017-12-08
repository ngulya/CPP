// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   t1.cpp                                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 14:06:56 by ngulya            #+#    #+#             //
//   Updated: 2017/11/06 14:06:57 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include <iostream>
class Ar{
	int ar[3];
public:
	class Ext {};
	Ar(int *a, int el){
		if(el != 3)
			throw Ext();
		for (int i = 0; i < 3 ; i++)
			ar[i] = a[i];
	}
	int getel(int index){
		return ar[index];
	}
};


int main()
{
	int a[] = {1, 2};

	try{
	Ar array(a, 2);
	std::cout<<array.getel(6)<<std::endl;
	}
	catch(Ar::Ext){
		std::cout<<"Error\n";
	}
	return 0;
}