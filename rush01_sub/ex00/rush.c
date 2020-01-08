/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shekhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 16:48:20 by shekhan           #+#    #+#             */
/*   Updated: 2019/01/20 16:48:23 by shekhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		safe_row(char **sudoku, int *row, char num);
int		safe_col(char **sudoku, int *col, char num);
int		safe_box(char **sudoku, int *row, int *col, char num);
int		safe_to_place(char **sudoku, int *row, int *col, char num);
char	**get_board(char **argv);
void	print_board(char **board);
int		check_sudoku(char **board1, char **board2);
int		valid_char(char **b);
int		valid_input(int argc, char **argv);

int		find_period(char **sudoku, int *row, int *col)
{
	*row = 0;
	while (*row < 9)
	{
		*col = 0;
		while (*col < 9)
		{
			if (sudoku[*row][*col] == '.')
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int		solve1(char **sudoku)
{
	char	num;
	int		row;
	int		col;

	row = 0;
	col = 0;
	if (!find_period(sudoku, &row, &col))
		return (1);
	num = '1';
	while (num <= '9')
	{
		if (safe_to_place(sudoku, &row, &col, num))
		{
			sudoku[row][col] = num;
			if (solve1(sudoku))
				return (1);
			sudoku[row][col] = '.';
		}
		num++;
	}
	return (0);
}

int		solve2(char **sudoku)
{
	char	num;
	int		row;
	int		col;

	row = 0;
	col = 0;
	if (!find_period(sudoku, &row, &col))
		return (1);
	num = '9';
	while (num >= '1')
	{
		if (safe_to_place(sudoku, &row, &col, num))
		{
			sudoku[row][col] = num;
			if (solve2(sudoku))
				return (1);
			sudoku[row][col] = '.';
		}
		num--;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	char **sudoku1;
	char **sudoku2;
	char **input;

	if (!(valid_input(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		sudoku1 = get_board(argv);
		sudoku2 = get_board(argv);
		input = get_board(argv);
		solve1(sudoku1);
		solve2(sudoku2);
		if (check_sudoku(sudoku1, sudoku2) && !check_sudoku(sudoku1, input))
			print_board(sudoku1);
		else
			write(1, "Error\n", 6);
		return (1);
	}
}
