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

NAME = ft_display_file
SOURCES = display_file.c
OBJECTS = display_file.o

all: ft_display_file
	
ft_display_file:
	gcc -Wall -Wextra -Werror -c $(SOURCES)
	gcc -o $(NAME) $(OBJECTS)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all