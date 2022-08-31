# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 17:02:33 by smodesto          #+#    #+#              #
#    Updated: 2022/09/01 01:23:03 by smodesto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

SRC_PATH		= ./
INCLUDES_PATH	= ./

SRCS_FILES =	main.cpp		\
				Contact.cpp		\
				PhoneBook.cpp

SRCS = $(addprefix $(SRC_PATH), $(SRCS_FILES))

HEADER_FILES	=	includes.hpp	\
					Contact.hpp		\
					PhoneBook.hpp

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
