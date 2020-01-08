/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 16:48:34 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/20 16:48:38 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);
int		ft_strlen(char *str);

char	**get_board(char **argv)
{
	int		row;
	int		column;
	char	**board;
	int		i;

	board = (char **)malloc(sizeof(char*) * 9);
	i = 0;
	while (i < 9)
	{
		board[i] = (char *)malloc(sizeof(char) * 9);
		i++;
	}
	row = 0;
	column = 0;
	while (row < 9)
	{
		while (column < 9)
		{
			board[row][column] = argv[row + 1][column];
			column++;
		}
		column = 0;
		row++;
	}
	return (board);
}

void	print_board(char **board)
{
	int row;
	int column;

	row = 0;
	column = 0;
	while (row < 9)
	{
		while (column < 9)
		{
			ft_putchar(board[row][column]);
			if (column != 8)
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		column = 0;
		row++;
	}
}

int		check_sudoku(char **board1, char **board2)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (board1[i][j] != board2[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		valid_char(char **b)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (b[i][j] < '1' && b[i][j] > '9' && b[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		valid_input(int argc, char **argv)
{
	int row;

	if (argc != 10)
	{
		return (0);
	}
	row = 1;
	while (row < 10)
	{
		if (ft_strlen(argv[row]) != 9)
		{
			return (0);
		}
		row++;
	}
	return (valid_char(argv));
}
