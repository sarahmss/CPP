# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 00:14:28 by coder             #+#    #+#              #
#    Updated: 2022/08/03 02:17:54 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = class

DIR_OBJS = objects

OBJS = class.o

SRC = class.cpp

CC	= clang++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -g  -std=c++98

$(NAME): $(OBJS)
		@-$(CC) $(CFLAGS) $(OBJS) $(HEADER) -o $(NAME)

$(OBJS): $(SRC)
		@$(CC) $(CFLAGS) -c $< -o $@
		@echo "Compiled "$<" successfully!"

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)
		$(RM) $(OBJS)

re:		fclean all

PHONY:	all clean fclean re