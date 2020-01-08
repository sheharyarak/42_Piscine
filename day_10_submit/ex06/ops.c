/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:52:17 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/22 20:52:19 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	ft_putnbr(int nb);

void	mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	div(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero\n", 25);
		return ;
	}
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	mod(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero\n", 25);
		return ;
	}
	ft_putnbr(a * b);
	ft_putchar('\n');
}
