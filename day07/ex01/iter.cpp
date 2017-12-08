// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/08 20:01:26 by ngulya            #+#    #+#             //
//   Updated: 2017/11/08 20:01:26 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template<typename T>
void		func(T &i){
	i++;
}

template<typename T>
void	iter(T &array, size_t	size, void (*ptr)(T &)){
	int	*ptr1 = &array;
	for(size_t i = 0;i < size; i++){
		ptr(*ptr1);
		ptr1++;
	}
}

int 	main(void)
{
	int *s = new int[3];
	void		(*f)(int &);
	s[0] = 1;
	s[1] = 2;
	s[2] = 3;
	for(int i = 0; i < 3; i++){
		std::cout<<s[i]<<" ";
	}
	std::cout<<std::endl;
	f = func;
	
	iter(*s, 3, f);
	
	for(int i = 0; i < 3; i++){
		std::cout<<s[i]<<" ";
	}
	std::cout<<std::endl;
	delete []s;
	return 0;
}
