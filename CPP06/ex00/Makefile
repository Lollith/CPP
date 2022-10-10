# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <agouet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 16:40:46 by agouet            #+#    #+#              #
#    Updated: 2022/10/10 11:00:43 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	convert

CC		=	c++

SRC_PATHS = ./sources/

SRC		=	$(addprefix ./sources/,\
				Convert.cpp\
				main.cpp)

OBJ		=	$(SRC:./sources/%.cpp=./build/%.o)
DEP		=	$(SRC:./sources/%.cpp=./build/%.d)
CFLAGS	= 	-MMD -Wall -Wextra -Werror -std=c++98 -fsanitize=address
INC		=	-I ./includes/


all	: $(NAME)

build/%.o:	./sources/%.cpp
			mkdir -p build
			$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(NAME): $(OBJ)
		@echo "\033[33;35m fsanitize=address \033[0m"
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf build

fclean: clean
		rm -f $(NAME)

re: fclean
	make -C .

.PHONY: all re clean fclean

-include $(DEP)

