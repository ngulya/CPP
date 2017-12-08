#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngulya <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 15:08:14 by ngulya            #+#    #+#              #
#    Updated: 2017/10/30 15:08:15 by ngulya           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = megaphone

SRC	 = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAGS) -o $(NAME) $(OBJ)
%.o: %.cpp
	@clang++ $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all