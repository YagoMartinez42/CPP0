# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samartin <samartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 16:46:54 by samartin          #+#    #+#              #
#    Updated: 2024/01/18 16:06:44 by samartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= phonebook
CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
RM			:= rm -rf
SRC			:=	main.cpp \
				ftUtils.cpp \
				PhoneBook.class.cpp \
				Contact.class.cpp
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