/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 23:08:25 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/12 23:08:32 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int guess;

	if (nb <= 0)
	{
		return (0);
	}
	guess = 0;
	while (guess <= nb / 2)
	{
		guess++;
		if (guess * guess == nb)
		{
			return (guess);
		}
	}
	return (0);
}
