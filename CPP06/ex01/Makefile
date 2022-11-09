# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <agouet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 16:40:46 by agouet            #+#    #+#              #
#    Updated: 2022/11/09 10:49:48 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	serialisation

CXX		=	c++

SRC_PATHS = ./sources/

SRC		=	$(addprefix ./sources/,\
				main.cpp)

OBJ		=	$(SRC:./sources/%.cpp=./build/%.o)
DEP		=	$(SRC:./sources/%.cpp=./build/%.d)
CXXFLAGS	= 	-MMD -Wall -Wextra -Werror -std=c++98 -fsanitize=address -Wconversion
INC		=	-I ./includes/


all	: $(NAME)

build/%.o:	./sources/%.cpp
			mkdir -p build
			$(CXX) $(CXXFLAGS) -c $< -o $@ $(INC)

$(NAME): $(OBJ)
		@echo "\033[33;35m fsanitize=address \033[0m"
		@echo "\033[33;35m Wconversion \033[0m"
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf build

fclean: clean
		rm -f $(NAME)

re: fclean
	make -C .

.PHONY: all re clean fclean

-include $(DEP)

