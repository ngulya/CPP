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
	Fixed(int const num);
	Fixed(float const num);
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed	&operator=(Fixed const &src);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	float	toFloat(void) const;
	int		toInt(void) const;
private:
	int					_fixed;
	static const int	_lit = 8;	

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif