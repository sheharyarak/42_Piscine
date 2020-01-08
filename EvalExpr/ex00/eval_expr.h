#ifndef EVAL_H
# define EVAL_H

#include <stdlib.h>
#include <unistd.h>

int		ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int     eval_expr(char *str);
int		get_first_number(char *exp);
char	get_operator(char *str);
int		evaluate(int first_num, char op, int sec_num);

#endif
