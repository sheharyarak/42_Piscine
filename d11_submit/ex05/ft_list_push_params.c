/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:21:12 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/23 22:21:15 by shekhan          ###   ########.fr       */
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	list = 0;
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}
