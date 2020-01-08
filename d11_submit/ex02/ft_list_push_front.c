/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:01:19 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/23 20:01:22 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_node;

	new_node = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = new_node;
	}
	else
	{
		new_node->next = *begin_list;
		*begin_list = new_node;
	}
}
