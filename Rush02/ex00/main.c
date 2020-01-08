/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:32:44 by rwright           #+#    #+#             */
/*   Updated: 2019/01/27 09:20:40 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


void	ft_print(int width_height[2], int rush, int sep)
{
	ft_putstr("[colle-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(width_height[0]);
	ft_putstr("] [");
	ft_putnbr(width_height[1]);
	if (sep)
		ft_putstr("] || ");
	else
		ft_putstr("]\n");
}

void	ft_print_single_width(int width_height[2], char corners[3])
{
	if (corners[2] == 'A')
		ft_print(width_height, 3, 0);
	else
	{
		ft_print(width_height, 2, 1);
		ft_print(width_height, 4, 0);
	}
}

void	ft_print_single_height(int width_height[2], char corners[3])
{
	if (corners[1] == 'A')
		ft_print(width_height, 2, 0);
	else
	{
		ft_print(width_height, 3, 1);
		ft_print(width_height, 4, 0);
	}
}

void	ft_print_rush(int width_height[2], char corners[3])
{
	if (corners[0] == 'o' || corners[0] == '/')
		ft_print(width_height, corners[0] == 'o' ? 0 : 1, 0);
	else if (width_height[0] == 1 && width_height[1] == 1)
	{
		ft_print(width_height, 2, 1);
		ft_print(width_height, 3, 1);
		ft_print(width_height, 4, 0);
	}
	else if (width_height[0] == 1)
		ft_print_single_width(width_height, corners);
	else if (width_height[1] == 1)
		ft_print_single_height(width_height, corners);
	else
	{
		if (corners[1] == 'A')
			ft_print(width_height, 2, 0);
		else if (corners[1] == 'C' && corners[2] == 'A')
			ft_print(width_height, 3, 0);
		else
			ft_print(width_height, 4, 0);
	}
}

int		main(void)
{
	int		width_height[2];
	char	corners[3];

	corners[0] = 0;
	corners[1] = 0;
	corners[2] = 0;
	ft_read(width_height, corners);
	if (width_height[0])
		ft_print_rush(width_height, corners);
	else
		ft_putstr("aucune\n");
	return (0);
}
