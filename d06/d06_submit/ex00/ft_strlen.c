/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:04:21 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/10 17:04:59 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(void)
{
  char **arr = ft_split_whitespaces("hello its me");
  for (int i = 0; i < 3; i++)
  {
    printf("%s \n",arr[i]);
  }
}