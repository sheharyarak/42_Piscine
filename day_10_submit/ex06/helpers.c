/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:51:56 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/22 20:51:58 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		valid_op(char *op);
int		ft_strlen(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		valid_op(char *op)
{
	if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
		return (0);
	return (1);
}

void	ft_putnbr(int nb)
{
	unsigned int postion;

	postion = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb / postion > 10)
	{
		postion *= 10;
	}
	while (postion > 0)
	{
		ft_putchar('0' + (nb / postion));
		nb = nb - (nb / postion) * postion;
		postion /= 10;
	}
}

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	if (!str[i])
		return (0);
	while (str[i] >= 0 && str[i] <= '*')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
