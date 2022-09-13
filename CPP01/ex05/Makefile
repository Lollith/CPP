# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lollith <lollith@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 16:40:46 by agouet            #+#    #+#              #
#    Updated: 2022/09/13 18:52:31 by lollith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Harl2.0
CC		=	c++

SRC_PATHS = ./sources/

SRC		=	$(addprefix ./sources/, \
				Harl.cpp \
				main.cpp)

OBJ		=	$(SRC:./sources/%.cpp=./build/%.o)
DEP		=	$(SRC:./sources/%.cpp=./build/%.d)
CFLAGS	= 	-MMD -Wall -Wextra -Werror -std=c++98
INC		=	-I ./includes/


all	: $(NAME)

build/%.o:	./sources/%.cpp
			mkdir -p build
			$(CC) $(CFLAGS) -c $^ -o $@ $(INC)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf build

fclean: clean
		rm -f $(NAME)

re: fclean
	make -C .

.PHONY: all re clean fclean

-include $(DEP)

