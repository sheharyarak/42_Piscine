/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:45:45 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/23 15:45:48 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp_node;
	t_list	*first_node;

	first_node = *begin_list;
	tmp_node = ft_create_elem(data);
	if (*begin_list == 0)
	{
		*begin_list = tmp_node;
		return ;
	}
	while (first_node->next != 0)
	{
		first_node = first_node->next;
	}
	first_node->next = tmp_node;
}
