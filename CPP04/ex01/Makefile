# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lollith <lollith@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 16:40:46 by agouet            #+#    #+#              #
#    Updated: 2022/09/23 15:45:28 by lollith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brain

CC		=	c++

SRC_PATHS = ./sources/

SRC		=	$(addprefix ./sources/,\
				Animal.cpp\
				Dog.cpp\
				Cat.cpp\
				WrongAnimal.cpp\
				WrongCat.cpp\
				Brain.cpp\
				main.cpp)

OBJ		=	$(SRC:./sources/%.cpp=./build/%.o)
DEP		=	$(SRC:./sources/%.cpp=./build/%.d)
CFLAGS	= 	-MMD -Wall -Wextra -Werror -std=c++98
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
