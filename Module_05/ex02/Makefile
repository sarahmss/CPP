# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 17:02:33 by smodesto          #+#    #+#              #
#    Updated: 2022/10/22 03:26:38 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Bureaucrat

SRC_PATH		= ./
INCLUDES_PATH	= ./
OBJS_PATH		= ./objects/

SRCS_FILES =	main.cpp					\
				Bureaucrat.cpp				\
				Form.cpp					\
				ShrubberyCreationForm.cpp	\
				RobotomyRequestForm.cpp		\
				PresidentialPardonForm.cpp

SRCS = $(addprefix $(SRC_PATH), $(SRCS_FILES))

OBJS_FILES	= $(patsubst %.cpp, %.o, $(SRCS_FILES))
OBJS = $(addprefix $(OBJS_PATH), $(OBJS_FILES))

HEADER_FILES	=	Bureaucrat.hpp				\
					Form.hpp					\
					ShrubberyCreationForm.cpp	\
					RobotomyRequestForm.cpp		\
					PresidentialPardonForm.cpp

HEADERS = $(addprefix $(INCLUDES_PATH), $(HEADER_FILES))

CC			= c++
FLAGS		= -Wall -Wextra -Werror -g -std=c++98
INCLUDES	= -I$(INCLUDES_PATH)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(FLAGS) $(INCLUDES) -o $(NAME)

$(OBJS_PATH)%.o : $(SRC_PATH)%.cpp $(HEADERS)
			@mkdir -p objects
			$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@

clean:
			@rm -f $(OBJS)
			@rm -rf $(OBJS_PATH)
			@echo cleaned!

fclean:		clean
			@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
