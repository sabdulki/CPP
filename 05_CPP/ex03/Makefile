# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 19:13:21 by sabdulki          #+#    #+#              #
#    Updated: 2024/10/14 12:51:07 by sabdulki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Bureaucrat.cpp AForm.cpp \
		ShrubberyCreationForm.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp Intern.cpp
# PresidentialPardonForm.cpp RobotomyRequestForm.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = exec

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean : 
	rm -f $(OBJS)
	rm -f *_shrubbery   
# Remove any file ending with "_shrubbery"

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re