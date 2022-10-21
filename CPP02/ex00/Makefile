# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <agouet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 16:40:46 by agouet            #+#    #+#              #
#    Updated: 2022/10/21 09:13:50 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed_point

CC		=	c++

SRC_PATHS = ./sources/

SRC		=	$(addprefix ./sources/,\
				Fixed.cpp\
				main.cpp)

OBJ		=	$(SRC:./sources/%.cpp=./build/%.o)
DEP		=	$(SRC:./sources/%.cpp=./build/%.d)
CFLAGS	= 	-MMD -Wall -Wextra -Werror -Wno-unused-const-variable -std=c++98
INC		=	-I ./includes/


all	: $(NAME)

build/%.o:	./sources/%.cpp
			mkdir -p build
			$(CC) $(CFLAGS) -c $< -o $@ $(INC)

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

