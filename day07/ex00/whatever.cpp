// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/08 19:09:54 by ngulya            #+#    #+#             //
//   Updated: 2017/11/08 19:09:54 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template <typename T>
void		swap(T &f, T &s){
	T swp;
	swp = f;
	f = s;
	s = swp;
}

template <typename S>
S 	const	min(S s1, S s2){
	return s1 < s2 ? s1 : s2;
}

template <typename S>
S 	const	max(S s1, S s2){
	return s1 > s2 ? s1 : s2;
}

int 	main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}