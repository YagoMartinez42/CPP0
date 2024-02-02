# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samartin <samartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 16:43:31 by samartin          #+#    #+#              #
#    Updated: 2024/01/18 13:04:42 by samartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= megaphone
CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
RM			:= rm -rf
SRC			:= megaphone.cpp
OBJ			:= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re
