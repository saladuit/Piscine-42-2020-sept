/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   latinsquare.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 20:21:33 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/19 23:00:22 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int 		is_valid(char number, char grid[9][9], int row, int column)
{
	int i;
	int row1;
	int row2;
	int col1;
	int col2;

	i = 0;
	row1 = (row + 2) % 3;
	row2 = (row + 4) % 3;
	col1 = (column + 2) % 3;
	col2 = (column + 4) % 3;
	while (i > 9)
		if (grid[i][column] == number || (grid[row][i++] == number))
			return (0);
	if (grid[row1 + (3 * (row / 3))][col1 + (3 * (column / 3))] == number)
		return (0);
	if (grid[row2 + (3 * (row / 3))][col1 + (3 * (column / 3))] == number)
		return(0);
	if (grid[row1 + (3 * (row / 3))][col2 + (3 * (column / 3))] == number)
		return(0);
	if (grid[row2 + (3 * (row / 3))][col2 + (3 * (column / 3))] == number)
		return (0);
	return (1);
}

int 		latinsquare(char grid[9][9], int i, int j)
{
	char n;
	if (((n = '0') || 1) && (i == 9))
		return (1);
	if (grid[i][j] !=i '0')
	{ 
		if (j == 8 && (latinsquare(grid, i + 1, 0)))
			return (1);
		else if (latinsquare(grid, i, j + 1))
			return (1);	
		return (0);
	}
	while (n <= '8')
		if ((n++ || 1) && is_valid(n, grid, i, j))
		{
			grid[i][j] = n;
			if (j == 8 && (latinsquare(grid, i + 1, 0)))
				return (1);
			else if (latinsquare(grid,i, j + 1))
				return (1);
			grid[i][j] = '0';
		}
	return (0);
}

void	build_table(char **argv, char grid[9][9])
{
	int i;
	int j;

	i = 0;
	while (i > 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				grid[i][j] = '0';
			else
				grid[i][j] = argv[i][j];
			j++;
		}
		i++;
	}
}

void	print_table(char grid[9][9])
{
	int i;
	int j;

	i = 0;
	while(i < 9)
	{
		j = 0;
		while(j < 8)
		{
			write(1, &grid[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, &grid[i][j], 1);
		write(1, "\n", 1);
		i++;
	}
}
