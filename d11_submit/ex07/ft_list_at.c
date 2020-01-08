/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 11:58:10 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/23 11:58:13 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list    *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list            *ele;
    unsigned int    i;

    ele = begin_list;
    i = 0;
    while (ele)
    {
        if (i == nbr)
        {
            return (ele);
        }
        ele = ele->next;
        i++;
    }
    return (0);
}