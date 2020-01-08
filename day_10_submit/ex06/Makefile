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

NAME = do-op
SOURCES = *.c
OBJECTS = *.o
HEADERS_FOLDER = includes

all: make_file
	
make_file:
	gcc -c -Wall -Wextra -Werror $(SOURCES)
	gcc -o $(NAME) $(OBJECTS)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
