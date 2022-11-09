# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <agouet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 16:40:46 by agouet            #+#    #+#              #
#    Updated: 2022/11/09 10:45:40 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.cpp=.o)
DEP		=	$(SRCS:.cpp=.d)
CXX		=	c++
CXXFLAGS	= -MMD -Wall -Wextra -Werror -std=c++98

%.o:	%.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

all	: $(NAME)

clean:
		rm -f $(OBJ) $(DEP)

fclean: clean
		rm -f $(NAME)

re: fclean
	make

.PHONY: all re clean fclean

-include $(DEP)

