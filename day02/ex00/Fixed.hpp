// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/02 16:07:08 by ngulya            #+#    #+#             //
//   Updated: 2017/11/02 16:07:08 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed &operator=(Fixed const &src);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
private:
	int		_fixed;
	static const int	_lit;	

};


#endif