# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lollith <lollith@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 16:40:46 by agouet            #+#    #+#              #
#    Updated: 2022/08/22 21:27:58 by lollith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.cpp=.o)
DEP		=	$(SRCS:.cpp=.d)
CC		=	c++
FLAGS	= -MMD -Wall -Wextra -Werror -std=c++98

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
		$(CC) $(CFLAG) $(OBJ) -o $(NAME)

all	: $(NAME)

clean:
		rm -f $(OBJ) $(DEP)

fclean: clean
		rm -f $(NAME)

re: fclean
	make

.PHONY: all re clean fclean

-include $(DEP)

