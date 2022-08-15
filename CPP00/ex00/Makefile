# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <agouet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 16:40:46 by agouet            #+#    #+#              #
#    Updated: 2022/08/15 16:50:57 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.c=.o)
DEP		=	$(SRCS:.c=.d)
CC		=	c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
		$(CC) $(CFLAG) $(OBJ) -o $(NAME)

all	: $(NAME)

clean:
		rm -f $(OBJ)(DEP)

fclean: clean
		rm -f $(NAME)

re: fclean
	make

.PHONY: all re clean fclean

-include $(DEP)

