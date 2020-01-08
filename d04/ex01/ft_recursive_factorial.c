/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 22:50:17 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/12 22:50:27 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 2)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	if (nb < 0 || nb > 1932053503)
	{
		return (0);
	}
	else
	{
		return (nb);
	}
}
