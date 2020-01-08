/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:52:05 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/22 20:52:07 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		valid_op(char *op);
int		ft_strlen(char *str);
int		mul(int a, int b);
int		div(int a, int b);
int		sub(int a, int b);
int		mod(int a, int b);
int		add(int a, int b);
int		do_op(int a, char *op, int b);

int		do_op(int a, char *op, int b)
{
	int	(*ops[5])(int, int);

	ops[0] = &add;
	ops[1] = &sub;
	ops[2] = &mul;
	ops[3] = &div;
	ops[4] = &mod;
	if (*op == '+')
		return (ops[0](a, b));
	else if (*op == '-')
		return (ops[1](a, b));
	else if (*op == '*')
		return (ops[2](a, b));
	else if (*op == '/')
		return (ops[3](a, b));
	else if (*op == '%')
		return (ops[4](a, b));
	else
		return (0);
}

int		main(int argc, char *argv[])
{
	int		val1;
	int		val2;
	char	*op;

	if (argc != 4)
		return (0);
	if (valid_op(argv[2]) == 0)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	op = argv[2];
	do_op(val1, op, val2);
	return (1);
}
