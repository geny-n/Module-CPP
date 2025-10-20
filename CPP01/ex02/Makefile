# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 15:02:23 by ngeny             #+#    #+#              #
#    Updated: 2025/04/01 20:18:26 by ngeny            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJDIR = ./obj/

SRC = main.cpp
OBJ = ${SRC:%.cpp=${OBJDIR}%.o}

all : ${NAME}

${NAME} : ${OBJ}
	@${CPP} ${FLAGS} ${OBJ} -o ${NAME}

${OBJDIR}%.o : %.cpp
	@mkdir -p ${dir $@}
	@${CPP} ${FLAGS} -c -o $@ $<

clean :
	@rm -rf ${OBJDIR}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY :
	all clean fclean re