#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngulya <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 19:01:47 by ngulya            #+#    #+#              #
#    Updated: 2017/11/09 19:01:47 by ngulya           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	= arr

CC		= clang++ -Wall -Werror -Wextra

SRC		= main.cpp

OBJ		= $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC)  $(OBJ) -o $(NAME)

.cpp.o	:
	$(CC)  -o $@ -c $<

all		: $(NAME)

clean	:
	rm -f $(OBJ)

fclean	: clean
	rm -f $(NAME)

re		: fclean all