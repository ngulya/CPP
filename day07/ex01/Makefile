NAME	= iter

CC		= clang++
FLG		= -Wall -Werror -Wextra

SRC		= iter.cpp

OBJ		= $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC) $(FLG) $(OBJ) -o $(NAME)

.cpp.o	:
	$(CC) $(FLG) -o $@ -c $<

all		: $(NAME)

clean	:
	rm -f $(OBJ)

fclean	: clean
	rm -f $(NAME)

re		: fclean all