/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 16:48:48 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/20 16:48:50 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	safe_row(char **sudoku, int *row, char num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[*row][i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	safe_col(char **sudoku, int *col, char num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][*col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	safe_box(char **s, int *row, int *col, char num)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (s[i + ((*row) - (*row) % 3)][j + ((*col) - (*col) % 3)] == num)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	safe_to_place(char **s, int *r, int *c, char n)
{
	return (safe_row(s, r, n) && safe_col(s, c, n) && safe_box(s, r, c, n));
}
