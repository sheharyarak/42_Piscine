# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwright <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/26 13:06:19 by rwright           #+#    #+#              #
#    Updated: 2019/01/26 22:52:38 by rwright          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@gcc -c *.c
	@gcc -Wall -Werror -Wextra *.o -o colle-2
	./colle-00 4 4 | ./colle-2

g:
	@gcc -c *.c
	@gcc -g -Wall -Werror -Wextra *.o -o colle-2
	./colle-00 4 4 | ./colle-2

f:
	@gcc -fsanitize=dataflow -c *.c
	@gcc -fsanitize=dataflow -Wall -Wextra -Werror *.o -o colle-2
	./colle-02 1 2 | ./colle-2

clean:
	@rm -f *.o

fclean: clean
	@rm -f colle-2

re: fclean all
