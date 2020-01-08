/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:18:26 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/23 22:18:30 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	if (begin_list)
	{
		tmp = begin_list;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		return (tmp);
	}
	else
		return (NULL);
}
