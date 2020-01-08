/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 15:55:11 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/14 15:55:16 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
