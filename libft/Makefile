# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tditse <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/16 20:14:35 by tditse            #+#    #+#              #
#    Updated: 2018/07/01 14:05:05 by tditse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC	 = *.c
OBJ	 = *.o
HEADER = libft.h
FLAGS = -c -Wall -Wextra -Werror -I

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(HEADER) $(SRC)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
