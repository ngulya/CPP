// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/30 14:55:49 by ngulya            #+#    #+#             //
//   Updated: 2017/10/30 14:55:49 by ngulya           ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(int argc, char **argv)
{
	int 	i;
	int 	j;
	
	int		s;

	s = 'A' - 'a';
	i = 1;
	if(argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
			if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
				std::cout<<char(argv[i][j] + s);
			else
				std::cout<<char(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout<<std::endl;
	return 0;
}