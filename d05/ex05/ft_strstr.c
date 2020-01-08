/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 03:52:19 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/15 03:52:22 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int start;
	int i;

	start = 0;
	i = 0;
	if (!to_find[0])
	{
		return (&str[start]);
	}
	while (str[start] != '\0')
	{
		while (str[start + i] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
			{
				return (&str[start]);
			}
		}
		i = 0;
		start++;
	}
	return (0);
}
