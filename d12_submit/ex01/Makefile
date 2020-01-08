# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shekhan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 03:17:11 by shekhan           #+#    #+#              #
#    Updated: 2019/01/21 03:17:14 by shekhan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SOURCES = cat.c ft_strcmp.c ft_strlen.c
OBJECTS = cat.o ft_strcmp.o ft_strlen.o

all: make_file
	
make_file:
	gcc -Wall -Wextra -Werror -c $(SOURCES)
	gcc -o $(NAME) $(OBJECTS)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all