# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <agouet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 16:40:46 by agouet            #+#    #+#              #
#    Updated: 2022/11/09 10:47:00 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	PhoneBook
CXX			=	c++

SRC_PATHS 	= ./sources/

SRC			=	$(addprefix ./sources/, \
				Phonebook.cpp \
				Contact.cpp \
				main.cpp)

OBJ			=	$(SRC:./sources/%.cpp=./build/%.o)
DEP			=	$(SRC:./sources/%.cpp=./build/%.d)
CXXFLAGS	= 	-MMD -Wall -Wextra -Werror -std=c++98
INC			=	-I ./includes/


all	: $(NAME)

build/%.o:	./sources/%.cpp
			mkdir -p build
			$(CXX) $(CXXFLAGS) -c $< -o $@ $(INC)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf build

fclean: clean
		rm -f $(NAME)

re: fclean
	make -C .

.PHONY: all re clean fclean

-include $(DEP)

