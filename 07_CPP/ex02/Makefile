# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 14:40:14 by sabdulki          #+#    #+#              #
#    Updated: 2024/11/27 20:23:21 by sabdulki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# add dependencies! 
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

NAME = exec

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

%.o: %.cpp Array.tpp Array.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re