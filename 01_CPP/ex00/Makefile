# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/24 15:57:27 by sabdulki          #+#    #+#              #
#    Updated: 2024/09/05 15:08:55 by sabdulki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = brainz

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re