# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <agouet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 16:40:46 by agouet            #+#    #+#              #
#    Updated: 2022/08/24 17:14:16 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PhoneBook
CC		=	c++

SRC_PATHS = ./sources/

SRC		=	$(addprefix ./sources/, \
				Phonebook.cpp \
				Contact.cpp \
				main.cpp)

OBJ		=	$(SRC:./sources/%.cpp=./build/%.o)
DEP		=	$(SRC:./sources/%.cpp=./build/%.d)
CFLAGS	= 	-MMD -Wall -Wextra -Werror -std=c++98
INC		=	-I ./includes


all	: $(NAME)

build/%.o:	sources/%.cpp
		mkdir -p build
		$(CC) $(CFLAGS) -c $^ -o $@ $(INC)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf build

fclean: clean
		rm -f $(NAME)

re: fclean
	make

.PHONY: all re clean fclean

-include $(DEP)

