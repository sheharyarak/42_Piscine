/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:52:38 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/17 16:52:42 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int i;
	int j;

	i = min;
	j = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		arr[j] = i;
		i++;
		j++;
	}
	*range = arr;
	return (j);
}
