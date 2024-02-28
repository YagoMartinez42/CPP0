# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samartin <samartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 16:43:31 by samartin          #+#    #+#              #
#    Updated: 2024/02/02 15:18:56 by samartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= account
CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
RM			:= rm -rf
SRC			:= Account.cpp
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
