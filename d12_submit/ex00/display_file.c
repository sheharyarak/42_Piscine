/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 21:38:04 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/24 21:38:52 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		file;
	char	buffer_boiii;

	if (argc != 2)
	{
		if (argc == 1)
			write(2, "File name missing.", 18);
		else if (argc > 2)
			write(2, "Too many arguments.", 19);
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	if (file < 0)
		return (1);
	while (read(file, &buffer_boiii, 1))
		write(1, &buffer_boiii, 1);
	close(file);
}
