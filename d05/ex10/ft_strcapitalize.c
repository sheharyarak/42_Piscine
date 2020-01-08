/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 05:01:42 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/15 05:01:44 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		if (str[i - 1] <= 47 && str[0])
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] += 'A' - 'a';
		if (str[i - 1] >= 58 && str[i - 1] <= 64)
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] += 'A' - 'a';
		if (str[i - 1] >= 91 && str[i - 1] <= 96)
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] += 'A' - 'a';
		if (str[i - 1] >= 123)
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] += 'A' - 'a';
		i++;
	}
	return (str);
}
