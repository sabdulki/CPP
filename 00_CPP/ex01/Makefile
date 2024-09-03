# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/21 16:21:07 by sabdulki          #+#    #+#              #
#    Updated: 2024/09/03 13:21:17 by sabdulki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./main.cpp ./cmds.cpp ./utils.cpp ./PhoneBook.cpp ./Contact.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

NAME = phoneBook

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re