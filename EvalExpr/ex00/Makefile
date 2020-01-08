SOURCES = eval_expr.c ft_atoi.c ft_putnbr.c ft_putchar.c
OBJECTS = eval_expr.o ft_atoi.o ft_putnbr.o ft_putchar.o
NAME = evaluate

all:
	gcc -c -Wall -Wextra -Werror $(SOURCES)
	gcc -o $(OBJECTS) $(NAME)

clean:
	rm $(OBJECTS)

fclean:
	clean
	rm $(NAME)

re:
	fclean
	all