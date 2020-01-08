/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 19:31:40 by rwright           #+#    #+#             */
/*   Updated: 2019/01/27 09:20:13 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <stdio.h>

#define BUFF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

void	ft_putnbr(int n)
{
	long overflow;

	if (n < 0)
	{
		ft_putchar('-');
		overflow = n;
		if (n < -9)
			ft_putnbr(-overflow / 10);
		ft_putchar(-overflow % 10 + '0');
	}
	else if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	get_top_corners(char corners[3], int width_height[2])
{
	int 	i;
	int		bytes_read;
	char	*buff;
	char	last;

	bytes_read = read(0, buff, 1);
	corners[0] = buff[0];
	i = 0;
	while (*buff != '\n')
	{
		last = *buff;
		read(0, buff, 1);
		width_height[0]++;
	}
	width_height[1]++;
	corners[1] = last;
}

int		ft_read(int width_height[2], char corners[3])
{
	int		bytes_read;
	char	buff[BUFF_SIZE];
	int		i;

	width_height[0] = 0;
	width_height[1] = 0;
	get_top_corners(corners, width_height);
	while ((bytes_read = read(0, buff, BUFF_SIZE)) > 0)
	{
		i = 0;
		while (i < bytes_read)
			if (buff[i++] == '\n')
				width_height[1]++;
	}
	corners[2] = buff[i - 1];
	return (width_height[0] > 0);
}
