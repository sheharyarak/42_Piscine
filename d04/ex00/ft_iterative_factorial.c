/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 22:44:28 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/12 22:44:33 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = nb;
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	while (--nb > 0)
	{
		fact = fact * (nb);
	}
	return (fact);
}
