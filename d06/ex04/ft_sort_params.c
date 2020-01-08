/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 23:17:58 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/16 23:18:00 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
void	ft_swap(char *a, char *b, int strlen_a);
int		ft_strlen(char *str);
void	print_string_array(char *arr[], int start, int end);


int main (int argc, char *argv[])
{
    int i;
	int j;
	char *temp;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j + 1 < argc)
		{
			if (ft_strcmp(argv[j],argv[j + 1]) > 0)
			{
				ft_swap(argv[j], argv[j + 1], ft_strlen(argv[j]));
			}
			j++;
		}
		i++;
	}
	print_string_array(argv, 1, argc);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0' || s2 == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_swap(char *a, char *b, int strlen_a)
{
	int len;
	char tmp[strlen_a];

	ft_strcpy(tmp, a);
	ft_strcpy(a, b);
	ft_strcpy(b, tmp);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print_string_array(char *arr[], int start, int end)
{
	int i;

	i = 0;
	while (start < end)
	{
		while (arr[start][i] != '\0')
		{
			ft_putchar(arr[start][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		start++;
	}
}
