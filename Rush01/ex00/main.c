/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 21:00:54 by safoh         #+#    #+#                 */
/*   Updated: 2020/09/19 22:42:38 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv) //check wich input
{
	char grid[9][9]; //change grid layout

	if (!(input_is_valid(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	build_table(argv + 1, grid);
	latinsquare(grid, 0, 0);
	print_table(grid);
	return (0);
}
