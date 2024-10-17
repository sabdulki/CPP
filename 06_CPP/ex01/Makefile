# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 15:34:36 by sabdulki          #+#    #+#              #
#    Updated: 2024/10/17 17:24:39 by sabdulki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Serializer.cpp Data.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = exec

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re