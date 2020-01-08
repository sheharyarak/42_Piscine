/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 23:17:21 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/23 23:17:23 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *list;

	if (*begin_list == 0)
	{
		return ;
	}
	else
	{
		list = *begin_list;
		while (list->next != NULL)
		{
			tmp = list;
			list = list->next;
			free(tmp);
		}
		*begin_list = 0;
		list = 0;
	}
}
