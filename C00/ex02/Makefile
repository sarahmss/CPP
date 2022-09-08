# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 17:02:33 by smodesto          #+#    #+#              #
#    Updated: 2022/09/08 03:42:21 by smodesto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Account

SRC_PATH		= ./
INCLUDES_PATH	= ./

SRCS_FILES =	tests.cpp		\
				Account.cpp
SRCS = $(addprefix $(SRC_PATH), $(SRCS_FILES))

HEADER_FILES	=	Account.hpp	\

HEADERS = $(addprefix $(INCLUDES_PATH), $(HEADER_FILES))

CC			= c++
FLAGS		= -Wall -Wextra -Werror -g -std=c++98
INCLUDES	= -I$(INCLUDES_PATH)

all:		$(NAME)

$(NAME):
			$(CC) $(SRCS) $(FLAGS) $(INCLUDES) -o $(NAME)

clean:
			@echo cleaned!

fclean:
			@rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
