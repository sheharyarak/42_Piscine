#include "eval_expr.h"

int		eval_expr(char *str)
{
    int     first_num;
    int     sec_num;
    char    op;
	int		result;

	result = 0;
	while (*str)
	{
		first_num =  get_first_number(str);
		op = get_operator(str);
		sec_num = get_first_number(str);
		result += evaluate(first_num, op, sec_num);
		str++;
	}
	return (result);
}

int		get_first_number(char *str_exp)
{
    int nb;

    while (*str_exp == ' ' || *str_exp == '\t')
        str_exp++;
    if (*str_exp == '(')
    {
        str_exp++;
        nb = eval_expr(str_exp);
        if (*str_exp == ')')
            str_exp++;
        return (nb);
    }
    return ft_atoi(str_exp);
}

char	get_operator(char *str)
{
	while (*str == ' ' || *str == '\t')
        str++;
    if (*str == '*' ||
        *str == '/' ||
        *str == '+' ||
        *str == '-' ||
        *str == '%')
		return (*str);
	else
		return (0);
}

int		evaluate(int first_num, char op, int sec_num)
{
	if (op == '+')
		return (first_num + sec_num);
	if (op == '-')
		return (first_num - sec_num);
	if (op == '*')
		return (first_num * sec_num);
	if (op == '/')
		return (first_num / sec_num);
	if (op == '%')
		return (first_num % sec_num);
	else
		return (0);
}