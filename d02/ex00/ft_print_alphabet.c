/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:04:21 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/10 18:38:54 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		ft_putchar(i);
		i++;
	}
}
