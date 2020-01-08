/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 19:33:44 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/24 19:33:56 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

void	show_error(char *name)
{
	write(2, "cat: ", 5);
	write(2, name, ft_strlen(name));
	write(2, ": No such file or directory", 27);
}

void	read_write_file(int file)
{
	char buffer_boiii;

	write(1, "\n", 1);
	while (read(file, &buffer_boiii, 1) > 0)
		write(1, &buffer_boiii, 1);
	close(file);
}

void	echo_term(void)
{
	char char_boiii;

	while (read(0, &char_boiii, 1) > 0)
		write(1, &char_boiii, 1);
}

void	display_files(int file_count, char *file_names[])
{
	int file;
	int file_num;

	file_num = 1;
	while (file_num < file_count)
	{
		if (ft_strcmp(file_names[file_num], "-") == 0)
			echo_term();
		else
			file = open(file_names[file_num], O_RDONLY);
		if (file < 0)
			show_error(file_names[file_num]);
		else
			read_write_file(file);
		file_num++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		echo_term();
	else
		display_files(argc, argv);
}
