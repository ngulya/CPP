// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/09 19:01:11 by ngulya            #+#    #+#             //
//   Updated: 2017/11/09 19:01:12 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array
{
private:
	size_t	_index;
	T 		*_arr;
public:
	Array(void);
	Array(unsigned int n);
	~Array(void);
	Array	&operator=(Array<T> const &r);
	T 	&operator[](size_t i);
	Array(Array<T> const &r);
size_t	getSize(void);
void	printArr();
	class Except: public std::exception{
	public:
		Except();
	};
};

template<typename T>
void	Array<T>::printArr(){
	for(size_t i = 0; i < _index; i++){
		std::cout<<"["<<_arr[i]<<"] ";
	}
	std::cout<<std::endl;
}

template<typename T>
Array<T>::Except::Except(){
	std::cout<<"Incorrect index try later..."<<std::endl;
}

template<typename T>
T 	&Array<T>::operator[](size_t i){
	if(i < _index)
		return this->_arr[i];
	throw(Except());
}

template<typename T>
Array<T>::Array(unsigned int n){
	if(n == 0){
		_arr = new T();
		_index = 0;
		return;
	}
	_index = n;
	_arr = new T[n];
	for(unsigned int i = 0; i < n; i++){
		_arr[i] = i + 1;
	}
}

template<typename T>
Array<T>::Array(Array<T> const &r){
	*this = r;
}

template<typename T>
Array<T> 	&Array<T>::operator=(Array<T> const &r){
	if(_index > 0)
		delete [] _arr;
	_index = r.getSize();
	if(_index == 0)
		_arr = new T();
	else{
		_arr = new T[_index];
		for(unsigned int i = 0; i < _index; i++){
			_arr[i] = r.getArr(i);
		}
	}
	return *this;
}

template<typename T>
size_t	Array<T>::getSize(void){
	return _index;
}

template<typename T>
Array<T>::Array(void){
	_arr = new T();
	_index = 0;
}

template<typename T>
Array<T>::~Array(void){
	delete []_arr;
}

#endif