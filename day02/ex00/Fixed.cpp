// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/02 16:07:16 by ngulya            #+#    #+#             //
//   Updated: 2017/11/02 16:07:16 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Fixed.hpp"

const int Fixed::_lit = 8;

Fixed::Fixed(void){
	_fixed = 0;
	std::cout<<"Default constructor called"<<std::endl;
	return;
}
Fixed::Fixed(Fixed const &src){
	std::cout<<"Copy constructor called"<<std::endl;
	*this = src;
}
Fixed::~Fixed(void){
	std::cout<<"Default constructor called"<<std::endl;
	return;
}
int		Fixed::getRawBits( void ) const{
	std::cout<<"getRawBits member function called"<<std::endl;
	return _fixed;
}

void	Fixed::setRawBits( int const raw ){
	std::cout<<"setRawBits member function called"<<std::endl;
	_fixed = raw;
}

Fixed &Fixed::operator=(Fixed const &src){
	std::cout<<"Assignation operator called"<<std::endl;
	if(this != &src)
		this->_fixed = src.getRawBits();
	return *this;
}