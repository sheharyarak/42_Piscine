/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 23:17:24 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/16 23:17:27 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (--argc > 0)
	{
		while (argv[argc][i] != '\0')
		{
			ft_putchar(argv[argc][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
	}
	return (0);
}
