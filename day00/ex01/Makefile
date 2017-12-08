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

CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = phonebook
INC_NAME =  PhoneBook.class.hpp
INC_DIR =    ./
INC = $(addprefix $(INC_DIR)/, $(INC_NAME))
OBJ_DIR =    .obj
OBJ = $(subst .cpp,.o,$(subst $(SRC_DIR)/,$(OBJ_DIR)/,$(SRC)))
SRC_DIR =    ./
SRC = $(addprefix $(SRC_DIR)/, $(SRC_NAME))
SRC_NAME =  	Phonebook.class.cpp\
				main.cpp

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) 
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CC) -c $(CFLAGS) $? -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all