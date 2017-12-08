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
#include <cmath>

Fixed::Fixed(void){
	_fixed = 0;
	std::cout<<"Default constructor called"<<std::endl;
	return;
}
Fixed::Fixed(Fixed const &src){
	std::cout<<"Copy constructor called"<<std::endl;
	*this = src;
}


Fixed::Fixed(int const num){
	std::cout<<"Int constructor called"<<std::endl;
	_fixed = num * (1 << _lit);
}

Fixed::Fixed(float const num){
	std::cout<<"Float constructor called"<<std::endl;
	_fixed = roundf(num * (1 << _lit));
}

Fixed::~Fixed(void){
	std::cout<<"Default constructor called"<<std::endl;
	return;
}
int		Fixed::getRawBits( void ) const{
	return _fixed;
}

void	Fixed::setRawBits( int const raw ){
	_fixed = raw;
}

Fixed &Fixed::operator=(Fixed const &src){
	std::cout<<"Assignation operator called"<<std::endl;
	if(this != &src)
		_fixed = src.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const{
	float f;

	f = (float)_fixed/(1 << _lit);
	return f;
}

int		Fixed::toInt(void) const{
	return (_fixed>>_lit);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs){
	o<<rhs.toFloat();
	return o;
}